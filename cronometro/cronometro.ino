/***************************************\
**
Autores: Hygor Jardim e Heitor Monteiro
Projeto Crônometro Ônibus
**
\***************************************/
#include <LiquidCrystal.h>
int freq = 0;
int tempo = 0;
int tempo2 = 0;
boolean iniciar = true; 


int Botao1 = 8;
int Botao2 = 9;

int EstadoBotao1 = 0;
int EstadoBotao2 = 0;


int Buzzer = 6;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
lcd.begin(16, 2);
lcd.setCursor(0,0);
lcd.print("Tangaras: ");
lcd.setCursor(0,1);
lcd.print("Fonte Boa: ");
pinMode(Botao1, OUTPUT);
pinMode(Botao2, OUTPUT);
pinMode(Buzzer, OUTPUT);
}

void loop() {

EstadoBotao1 = digitalRead(Botao1);
EstadoBotao2 = digitalRead(Botao2);

if (EstadoBotao1 == HIGH){
tempo = 0; 
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Tangaras: ");
lcd.setCursor(0,1);
lcd.print("Fonte Boa: ");
lcd.setCursor(11,0);
lcd.print(tempo);
}

if (EstadoBotao2 == HIGH){
tempo2 = 0; 
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Tangaras: ");
lcd.setCursor(0,1);
lcd.print("Fonte Boa: ");
lcd.setCursor(11,0);
lcd.print(tempo2);
}

delay(1000);
tempo = tempo + 1;
tempo2 = tempo2 + 1;
lcd.setCursor(11,0);
lcd.print(tempo);
lcd.setCursor(11,1);
lcd.print(tempo2);

}
