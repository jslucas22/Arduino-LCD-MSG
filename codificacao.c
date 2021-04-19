#include <Wire.h>
#include <LiquidCrystal_I2C.h>
//#include <LCD.h>

#define I2C_ADDR    0x3F
#define BACKLIGHT_PIN     3
#define En_pin  2
#define Rw_pin  1
#define Rs_pin  0
#define D4_pin  4
#define D5_pin  5
#define D6_pin  6
#define D7_pin  7

//Sensor Umidade e Chuva
int sensorUmidadeSolo = A0;             // Sensor de umidade do solo pino A0 conectado no A0 do Arduino
int sensorChuva = A1;                   // Sensor de chuva pino A0 conectado no A1 do Arduino
int portaRele = 4;                      // porta de controle do relé conectada no D4 do Arduino
int valorLimiteUmidade = 500;           // valor numérico da tensão de comparação do sensor / valor máximo = 1024
int valorLimiteChuva = 500;             // valor numérico da tensão de comparação do sensor / valor máximo = 1024
bool chuva;                             // condição de chuva 
bool soloUmido;  
//Fim
int n = 1;

LiquidCrystal_I2C  lcd(I2C_ADDR,En_pin,Rw_pin,Rs_pin,D4_pin,D5_pin,D6_pin,D7_pin);

void setup()
{
   Serial.begin(9600);                    // Monitor console 9600 Bps

 lcd.begin (16,2);
 

lcd.setBacklightPin(BACKLIGHT_PIN,POSITIVE);
lcd.setBacklight(HIGH);
lcd.home (); // go home

 lcd.print("dsadsa");  
}

void loop()
{
 lcd.setCursor (0,1);     
 lcd.print(n++,DEC);

 lcd.setBacklight(HIGH);   
 delay(3000);
}
