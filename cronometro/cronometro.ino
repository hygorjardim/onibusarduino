/***************************************\
**
  Autores: Hygor Jardim e Heitor Monteiro
  Projeto Crônometro Ônibus
**
  \***************************************/
#include <LiquidCrystal.h>
int freq = 0;
int segundo1 = 0;
int segundo2 = 0;
int minuto1 = 0;
int minuto2 = 0;

boolean iniciar = true;


int Botao1 = 8;
int Botao2 = 9;

int EstadoBotao1 = 0;
int EstadoBotao2 = 0;


int Buzzer = 6;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Tangaras:  :   ");
  lcd.setCursor(0, 1);
  lcd.print("Fonte Boa:  :   ");
  pinMode(Botao1, OUTPUT);
  pinMode(Botao2, OUTPUT);
  pinMode(Buzzer, OUTPUT);
}

void loop() {

  EstadoBotao1 = digitalRead(Botao1);
  EstadoBotao2 = digitalRead(Botao2);

  if (EstadoBotao1 == HIGH) {
    segundo1 = 0;
    minuto1 = 0;
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Tangaras:  :   ");
    lcd.setCursor(0, 1);
    lcd.print("Fonte Boa:  :   ");
    lcd.setCursor(12, 0);
    lcd.print(segundo1);
  }

  if (EstadoBotao2 == HIGH) {
    segundo2 = 0;
    minuto2 = 0;
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Tangaras:  :   ");
    lcd.setCursor(0, 1);
    lcd.print("Fonte Boa:  :   ");
    lcd.setCursor(12, 0);
    lcd.print(segundo2);
  }

  delay(1000);
  segundo1 = segundo1 + 1;
  segundo2 = segundo2 + 1;
  lcd.setCursor(12, 0);
  lcd.print(segundo1);
  lcd.setCursor(13, 1);
  lcd.print(segundo2);

}
