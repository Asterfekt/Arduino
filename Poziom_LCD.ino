#include "LiquidCrystal.h" //Bibloteka Wyświetlacza LCD\

LiquidCrystal lcd(2, 3, 4, 5, 6, 7); //PINY do wyświetlacza

int odczytanaWartosc;
void setup() {
  Serial.begin(9600);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Asterfekt");
  delay(1000);
  lcd.clear();
  int odczytanaWartosc ;
}


void loop() {


  odczytanaWartosc = analogRead(A0);//Odczytanie wartości z ADC
  odczytanaWartosc = map(odczytanaWartosc, 0, 1023, 0, 17);//Przeskalowanie wartości
  Serial.println(odczytanaWartosc);
  if (odczytanaWartosc == 1)
  { lcd.clear();
    lcd.setCursor(0, 2); //Ustawienie kursora}
    lcd.print(char(255)); //Wyświetlenie tekstu
    delay(200);
  }
  if (odczytanaWartosc == 2)
  { lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Poziom");
    lcd.setCursor(0, 2);
    lcd.print(char(255)); 
    lcd.setCursor(1, 2); 
    lcd.print(char(255)); 
    delay(400);
  }
  if (odczytanaWartosc == 3)
  { lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Poziom");
    lcd.setCursor(0, 2);  
    lcd.print(char(255));  
    lcd.setCursor(1, 2); 
    lcd.print(char(255));  
    lcd.setCursor(2, 2); 
    lcd.print(char(255));  
    delay(400);
  }
  if (odczytanaWartosc == 4)
  { lcd.clear(); lcd.setCursor(0, 0);
    lcd.print("Poziom");
    lcd.setCursor(0, 2);  
    lcd.print(char(255));  
    lcd.setCursor(1, 2);   
    lcd.print(char(255));  
    lcd.setCursor(2, 2); 
    lcd.print(char(255));  
    lcd.setCursor(3, 2);  
    lcd.print(char(255));  
    delay(400);
  }
  if (odczytanaWartosc == 5)
  { lcd.clear(); lcd.setCursor(0, 0);
    lcd.print("Poziom");
    lcd.setCursor(0, 2);  
    lcd.print(char(255));  
    lcd.setCursor(1, 2);  
    lcd.print(char(255));  
    lcd.setCursor(2, 2);  
    lcd.print(char(255));  
    lcd.setCursor(3, 2);  
    lcd.print(char(255));  
    lcd.setCursor(4, 2);  
    lcd.print(char(255));  
    delay(400);
  }
  if (odczytanaWartosc == 6)
  { lcd.clear(); lcd.setCursor(0, 0);
    lcd.print("Poziom");
    lcd.setCursor(0, 2);  
    lcd.print(char(255));  
    lcd.setCursor(1, 2);  
    lcd.print(char(255));  
    lcd.setCursor(2, 2); 
    lcd.print(char(255));  
    lcd.setCursor(3, 2); 
    lcd.print(char(255));  
    lcd.setCursor(4, 2);  
    lcd.print(char(255));  
    lcd.setCursor(5, 2); 
    lcd.print(char(255));  
    delay(400);
  }
  if (odczytanaWartosc == 7)
  { lcd.clear(); lcd.setCursor(0, 0);
    lcd.print("Poziom");
    lcd.setCursor(0, 2);  
    lcd.print(char(255));  
    lcd.setCursor(1, 2);  
    lcd.print(char(255));  
    lcd.setCursor(2, 2);  
    lcd.print(char(255)); 
    lcd.setCursor(3, 2);  
    lcd.print(char(255));  
    lcd.setCursor(4, 2);  
    lcd.print(char(255));  
    lcd.setCursor(5, 2);  
    lcd.print(char(255));  
    lcd.setCursor(6, 2);  
    lcd.print(char(255));  
    delay(400);
  }
  if (odczytanaWartosc == 8)
  { lcd.clear(); lcd.setCursor(0, 0);
    lcd.print("Poziom");
    lcd.setCursor(0, 2);  
    lcd.print(char(255)); 
    lcd.setCursor(1, 2); 
    lcd.print(char(255));  
    lcd.setCursor(2, 2); 
    lcd.print(char(255));  
    lcd.setCursor(3, 2);  
    lcd.print(char(255));  
    lcd.setCursor(4, 2);  
    lcd.print(char(255));  
    lcd.setCursor(5, 2);  
    lcd.print(char(255)); 
    lcd.setCursor(6, 2);  
    lcd.print(char(255));  
    lcd.setCursor(7, 2);  
    lcd.print(char(255));  
    delay(200);
  }
  if (odczytanaWartosc == 9)
  { lcd.clear(); lcd.setCursor(0, 0);
    lcd.print("Poziom");
    lcd.setCursor(0, 2);  
    lcd.print(char(255));  
    lcd.setCursor(1, 2);  
    lcd.print(char(255));  
    lcd.setCursor(2, 2);  
    lcd.print(char(255));  
    lcd.setCursor(3, 2);  
    lcd.print(char(255));  
    lcd.setCursor(4, 2);  
    lcd.print(char(255));  
    lcd.setCursor(5, 2);  
    lcd.print(char(255));  
    lcd.setCursor(6, 2);  
    lcd.print(char(255));  
    lcd.setCursor(7, 2);  
    lcd.print(char(255));  
    lcd.setCursor(8, 2);  
    lcd.print(char(255));  
    delay(400);
  }
  if (odczytanaWartosc == 10)
  { lcd.clear(); lcd.setCursor(0, 0);
    lcd.print("Poziom");
    lcd.setCursor(0, 2);  
    lcd.print(char(255));  
    lcd.setCursor(1, 2);  
    lcd.print(char(255));  
    lcd.setCursor(2, 2);  
    lcd.print(char(255));  
    lcd.setCursor(3, 2);  
    lcd.print(char(255));  
    lcd.setCursor(4, 2);  
    lcd.print(char(255));  
    lcd.setCursor(5, 2);  
    lcd.print(char(255));  
    lcd.setCursor(6, 2);  
    lcd.print(char(255));  
    lcd.setCursor(7, 2);  
    lcd.print(char(255));  
    lcd.setCursor(8, 2);  
    lcd.print(char(255));  
    lcd.setCursor(9, 2);  
    lcd.print(char(255));  
    delay(400);
  }
  if (odczytanaWartosc == 11)
  { lcd.clear(); lcd.setCursor(0, 0);
    lcd.print("Poziom");
    lcd.setCursor(0, 2);  
    lcd.print(char(255));  
    lcd.setCursor(1, 2);  
    lcd.print(char(255));  
    lcd.setCursor(2, 2);  
    lcd.print(char(255));  
    lcd.setCursor(3, 2);  
    lcd.print(char(255));  
    lcd.setCursor(4, 2);  
    lcd.print(char(255));  
    lcd.setCursor(5, 2);  
    lcd.print(char(255));  
    lcd.setCursor(6, 2);  
    lcd.print(char(255));  
    lcd.setCursor(7, 2);  
    lcd.print(char(255));  
    lcd.setCursor(8, 2);  
    lcd.print(char(255));  
    lcd.setCursor(9, 2);  
    lcd.print(char(255));  
    lcd.setCursor(10, 2);  
    lcd.print(char(255));  
    delay(400);
  }
  if (odczytanaWartosc == 12)
  { lcd.clear(); lcd.setCursor(0, 0);
    lcd.print("Poziom");
    lcd.setCursor(0, 2);  
    lcd.print(char(255)); 
    lcd.setCursor(1, 2);  
    lcd.print(char(255));  
    lcd.setCursor(2, 2);  
    lcd.print(char(255));  
    lcd.setCursor(3, 2);  
    lcd.print(char(255));  
    lcd.setCursor(4, 2);  
    lcd.print(char(255));  
    lcd.setCursor(5, 2); //Ustawienie kursora}
    lcd.print(char(255)); //Wyświetlenie tekstu
    lcd.setCursor(6, 2); //Ustawienie kursora}
    lcd.print(char(255)); //Wyświetlenie tekstu
    lcd.setCursor(7, 2); //Ustawienie kursora}
    lcd.print(char(255)); //Wyświetlenie tekstu
    lcd.setCursor(8, 2); //Ustawienie kursora}
    lcd.print(char(255)); //Wyświetlenie tekstu
    lcd.setCursor(9, 2); //Ustawienie kursora}
    lcd.print(char(255)); //Wyświetlenie tekstu
    lcd.setCursor(10, 2); //Ustawienie kursora}
    lcd.print(char(255)); //Wyświetlenie tekstu
    lcd.setCursor(11, 2); //Ustawienie kursora}
    lcd.print(char(255));  
    delay(400);
  }
  if (odczytanaWartosc == 13)
  { lcd.clear(); lcd.setCursor(0, 0);
    lcd.print("Poziom");
    lcd.setCursor(0, 2);  
    lcd.print(char(255)); 
    lcd.setCursor(1, 2); 
    lcd.print(char(255));  
    lcd.setCursor(2, 2);  
    lcd.print(char(255));  
    lcd.setCursor(3, 2); 
    lcd.print(char(255));  
    lcd.setCursor(4, 2);  
    lcd.print(char(255));  
    lcd.setCursor(5, 2);  
    lcd.print(char(255));  
    lcd.setCursor(6, 2);  
    lcd.print(char(255));  
    lcd.setCursor(7, 2);  
    lcd.print(char(255));  
    lcd.setCursor(8, 2);  
    lcd.print(char(255));  
    lcd.setCursor(9, 2);  
    lcd.print(char(255));  
    lcd.setCursor(10, 2);  
    lcd.print(char(255)); 
    lcd.setCursor(11, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(12, 2); 
    lcd.print(char(255)); 
    delay(400);
  }
  if (odczytanaWartosc == 14)
  { lcd.clear(); lcd.setCursor(0, 0);
    lcd.print("Poziom");
    lcd.setCursor(0, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(1, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(2, 2);
    lcd.print(char(255)); 
    lcd.setCursor(3, 2); 
    lcd.print(char(255));
    lcd.setCursor(4, 2); 
    lcd.print(char(255));
    lcd.setCursor(5, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(6, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(7, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(8, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(9, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(10, 2); 
    lcd.print(char(255));
    lcd.setCursor(11, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(12, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(13, 2); 
    lcd.print(char(255)); 
    delay(400);
  }
  if (odczytanaWartosc == 15)
  { lcd.clear(); lcd.setCursor(0, 0);
    lcd.print("Poziom");
    lcd.setCursor(0, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(1, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(2, 2); 
    lcd.print(char(255));
    lcd.setCursor(3, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(4, 2); 
    lcd.print(char(255));
    lcd.setCursor(5, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(6, 2); 
    lcd.print(char(255));
    lcd.setCursor(7, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(8, 2); 
    lcd.print(char(255));
    lcd.setCursor(9, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(10, 2);
    lcd.print(char(255)); 
    lcd.setCursor(11, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(12, 2);
    lcd.print(char(255)); 
    lcd.setCursor(13, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(14, 2);
    lcd.print(char(255)); 
    delay(400);
  }
  if (odczytanaWartosc == 16)
  { lcd.clear(); lcd.setCursor(0, 0);
    lcd.print("Poziom");
    lcd.setCursor(0, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(1, 2); 
    lcd.print(char(255));
    lcd.setCursor(2, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(3, 2); 
    lcd.print(char(255));
    lcd.setCursor(4, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(5, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(6, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(7, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(8, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(9, 2);
    lcd.print(char(255)); 
    lcd.setCursor(10, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(11, 2); 
    lcd.print(char(255));
    lcd.setCursor(12, 2); 
    lcd.print(char(255)); 
    lcd.setCursor(13, 2); 
    lcd.print(char(255));
    lcd.setCursor(14, 2);
    lcd.print(char(255)); 
    lcd.setCursor(15, 2); 
    lcd.print(char(255));
    delay(400);
  }
}
