#include <OneWire.h>
#include <DallasTemperature.h>
#define ONE_WIRE_BUS 12

OneWire oneWire(ONE_WIRE_BUS);

DallasTemperature sensors(&oneWire);

float Celcius=0;
int waterpin=A2,water; 

#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);


int pump=38,light=30,pol=22,b1=42,b2=44,rain=A0,raina=A1,gas=A15;


void gas_check()
              {
               int G=analogRead(gas); 
               Serial.println(analogRead(gas));   
               if (G>450)
                  {
                  digitalWrite(light, HIGH);
                  digitalWrite(pump,HIGH);
                  while (true){
                  lcd.clear();lcd.begin(16, 2);
                  lcd.setCursor(0, 0);lcd.print("GAS is leaking"); 
                  lcd.setCursor(0, 1);lcd.print("Fix the problem!"); 
                  delay(2000);
                  lcd.clear();lcd.begin(16, 2);
                  lcd.setCursor(0, 0);lcd.print("Press Button-3  "); 
                  lcd.setCursor(0, 1);lcd.print("For r. System "); 
                  delay(2000);}
                  }
                  
                                   
              }

void setup() {
  
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(pump,OUTPUT);
  pinMode(pol,OUTPUT);
  pinMode(light,OUTPUT);
  pinMode(b1,INPUT_PULLUP);
  pinMode(b2,INPUT_PULLUP);
  pinMode(rain,INPUT);
   pinMode(gas,INPUT);
}

void loop() {
  gas_check();
  
  lcd.clear();
  digitalWrite(pump,HIGH);
  digitalWrite(pol,HIGH);
  digitalWrite(light,LOW);
  lcd.clear();lcd.begin(16, 2);
  lcd.setCursor(0, 0);lcd.print("System has been");
  lcd.setCursor(0, 1);lcd.print("  activated    ");

  gas_check(); 
  if  (digitalRead(b2)==LOW)
      {
      lcd.clear();lcd.begin(16, 2);
      lcd.setCursor(0, 0);lcd.print("First situation!");
      lcd.setCursor(0, 1);lcd.print("*Working pump!*");
      digitalWrite(pump,LOW);
      int cnt,r,x,y;cnt=0;
       do {           gas_check();
                      r = analogRead(rain);
                      x = analogRead(raina);
                      cnt+= ((x<750));
                      Serial.print("->");
                      Serial.println(x);
                      Serial.print("->r");
                      Serial.println(r);
                      delay(100);
                      }while (cnt<20);   
      gas_check();
      digitalWrite(pump,HIGH);
      digitalWrite(light,HIGH);
      while (1<55){gas_check();
                  lcd.clear();lcd.begin(16, 2);
                  lcd.setCursor(0, 0);lcd.print("Water is leaking"); 
                  lcd.setCursor(0, 1);lcd.print("Fix the problem!"); 
                  Serial.println(x);
                  delay(2000);
                  lcd.clear();lcd.begin(16, 2);
                  lcd.setCursor(0, 0);lcd.print("Press Button-3  "); 
                  lcd.setCursor(0, 1);lcd.print("For r. System "); 
                  delay(2000);}
        
      }
  if (digitalRead(b1)==LOW)
     {int Celcius;
     while(true)
     {
     gas_check();
     sensors.requestTemperatures(); 
     Celcius=sensors.getTempCByIndex(0);
     lcd.clear();lcd.begin(16, 2);
     lcd.setCursor(0, 0);lcd.print("Temp:");lcd.print(Celcius);lcd.print("C'");
     lcd.setCursor(0, 1);lcd.print("Sunny day!");
     water = analogRead(waterpin);
     if (water>300 and Celcius>0){lcd.setCursor(0, 0);lcd.print("Temp:");lcd.print(Celcius);lcd.print("C'");lcd.setCursor(0, 1);lcd.print("Rainny day!");}

     if (water>300 and Celcius<=0){lcd.setCursor(0, 0);lcd.print("Temp:");lcd.print(Celcius);lcd.print("C'");lcd.setCursor(0, 1);lcd.print("Snowy day!");digitalWrite(pol,LOW);delay(10000);digitalWrite(pol,HIGH);}

     delay(500);
     }
     } 
     gas_check();

 
  delay(500);
}
