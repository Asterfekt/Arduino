
int Rain_signal = A0; 
int procent=0;
float napiecie=0;
void setup() {
  Serial.begin(9600); // Start the serial communication
}

void loop() {
  int Rain = analogRead(Rain_signal);
  Serial.print("Poziom sygnału : ");
  Serial.println(Rain);
  napiecie = Rain * (5.0/1024.0); //Przeliczenie wartości na napięcie
  Serial.print("Napiecie : ");
  Serial.print(napiecie);
  Serial.print("V");
  procent=napiecie/5*100;
  Serial.print("----- : ");
   Serial.print(procent); 
   Serial.print("% ");
   Serial.print("\n");
  delay(1000);
}
