     
#define Pomiar 3

void setup() {
  pinMode(Pomiar, INPUT);
  Serial.begin(9600);
}
void loop() {

  int Val = readRainSensor();
  Serial.print("Wyjscie cyfrowe: ");
  Serial.println(Val);

  if (Val) {
    Serial.println("Czysto i nie ma opadow ");
  } else {
    Serial.println("Pada");
  }

  delay(10000);  
  Serial.println("-----------------");
}

int readRainSensor() {
  delay(10);            
  int Val = digitalRead(Pomiar); 
 
  return Val;       
}
