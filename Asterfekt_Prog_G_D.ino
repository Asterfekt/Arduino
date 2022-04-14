//Definowanie wejść i zmiennych .
int Danezportu = 0;//Zczytywanie komend z portu
int i = 0; //deklaracja impulsów,które są zliczane przez wciśnięcie przycisku "sygnal"
#define dol 4
#define gora 3
#define Sygnal 2
#define Czujnik_G 5
#define Czujnik_D 6

void setup()
//Ustawianie wejść i wyjść
{
  Serial.begin(9600);   // predkosc transmisji przez port COM (USB)

  pinMode(dol, OUTPUT); // Wyjście "JAZDA dol"
  pinMode(gora, OUTPUT); // Wyjście "JAZDA gora"

  digitalWrite(dol, HIGH); // Początkowy stan wył. (Sterowanie stanem niskim)
  digitalWrite(gora, HIGH); // Początkowy stan wył.(Sterowanie stanem niskim)

  pinMode(Czujnik_G, INPUT_PULLUP); //Deklaracja Czujnika Góra
  pinMode(Czujnik_D, INPUT_PULLUP); //Deklaracja Czujnika Dół

  pinMode(Sygnal, INPUT_PULLUP); //Deklaracja sygnałów jako wejście .

}


void loop()
{


  if (digitalRead (Czujnik_G) == LOW && Danezportu != 'D') //Warunki zadziałania krańcówki w górnym położeniu.
  {
    Danezportu = 'U'; //czujnik wykrył pozycje w górnym położeniu,przejście do Case U
    i = 0; //Poczatkowa wartosc obrotow
  }
  if (digitalRead (Czujnik_D) == LOW && Danezportu != 'G') //Warunki zadziałania krańcówki w dolnym położeniu.
  {
    Danezportu = 'M'; //czujnik wykrył pozycje w dolnym położeniu .

  }
  if (Serial.available() > 0) { //Sprawdzanie czy Zostało coś wysłane do Arduino
    Danezportu = Serial.read(); //Zczytanie 1 znaku .
  }

  switch (Danezportu) {
    case 'G':
      //Zaświecenie diody zielonej,która symululuje ruch silnika w kierunku umożliwiającym ruch w góre.
      digitalWrite(dol, HIGH);
      digitalWrite(gora, LOW);
      attachInterrupt(digitalPinToInterrupt(Sygnal), sub, FALLING); //Przerwanie,które ma za zadanie odejmowanie impulsów "i" przez wykrywanie zbocza opadającego.
      Serial.println(i);//Wypisanie aktualnej wartości impulsów na port szeregowy .

      break;
    case 'S':
      //STOP
      digitalWrite(gora, HIGH);
      digitalWrite(dol, HIGH);
      Serial.println("stop");
      break;

    case 'D':
      //Zaświecenie diody niebieskiej,która symululuje ruch silnika w kierunku umożliwiającym ruch w góre.
      digitalWrite(gora, HIGH);
      digitalWrite(dol, LOW);
      attachInterrupt(digitalPinToInterrupt(Sygnal), add, FALLING); //Przerwanie,które ma za zadanie dodawanie impulsów "i" przez wykrywanie zbocza opadającego.
      Serial.println(i);//Wypisanie aktualnej wartości impulsów na port szeregowy .

      break;
    case 'U':
      //Zadziałanie krańcóki Góra
      Serial.println("Czujnik Gora");
      digitalWrite(gora, HIGH);
      break;
    case 'M':
      //Zadziałanie krańcóki dół
      Serial.println("Czujnik Dol");
      digitalWrite(dol, HIGH);
      break;
  }
}

void add() {
  //Przerwanie dodawanie
  i++;
}
void sub() {
  //Przerwanie odejmowanie
  if (i > 0) {
    i--;
  }
}
