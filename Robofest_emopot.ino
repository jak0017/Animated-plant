#include <LedControl.h>

int DIN = 12;
int CS =  11;
int CLK = 10;
LedControl lc=LedControl(DIN,CLK,CS,0);
byte smile[8]=   {0x00,0x66,0x66,0x00,0x00,0x81,0x42,0x3C};
byte smile2[8] = {0x42,0xA5,0x42,0x00,0x7E,0x42,0x24,0x18};
byte neutral[8]= {0x3C,0x42,0xA5,0x81,0xBD,0x81,0x42,0x3C};
byte sad[8]=     {0x00,0x66,0x66,0x00,0x00,0x3C,0x42,0x81};



void setup() {
  // put your setup code here, to run once:
 lc.shutdown(0,false);       //The MAX72XX is in power-saving mode on startup
 lc.setIntensity(0,15);      // Set the brightness to maximum value
 lc.clearDisplay(0);         // and clear the display
  Serial.begin(9600); 

}

void loop() {
  int i;
  // put your main code here, to run repeatedly:
int moisture_top = analogRead(A0);
  Serial.println(moisture_top);
  if (analogRead(A0)>200 && analogRead(A0)<600){
    Serial.println("I feel so comfortable  :) ");
   
    
  printByte(smile);
  delay(1000);
  printByte(smile2);
  delay(1000);
    
    
 
   }
   else if (analogRead(A0)>600){
    Serial.println("I am thirsty, please give me water  :( ");
    
    printByte(sad);
  delay(1000);
  
  
  
    
  }
}

void printByte(byte character [])
{
  int i = 0;
  for(i=0;i<8;i++)
  {
    lc.setRow(0,i,character[i]);
  }
}

  
