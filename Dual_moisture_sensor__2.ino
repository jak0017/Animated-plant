void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int moisture_top = analogRead(A0);
  Serial.println(moisture_top);
  int moisture_root= analogRead(A1);
  Serial.println(moisture_root);

 Serial.println("");

 while (moisture_top<250)
 { int i;
  
  if(analogRead(A1)>300){
  Serial.println(" Watering !! wohooo");}
  else if (200<=analogRead(A1)<=300){
 for(i=0;i<=3;i++)   
  {
    Serial.println(" I think i have sufficiant water, Thank you");
  }
  
  Serial.println("I feel so comfortable");
  delay(1000);
  
  }
  
  else if (analogRead(A1)<200){
    Serial.println("Over water !!! Stomachs full");
    }
  }
int i=0;

 if (analogRead(A1)>200 && analogRead(A1)<400)
 {Serial.println("I feel soo confortable");
  } 
 else if (analogRead(A1) > 400)
 {
  Serial.println(" Give me water or else I am gonna die ");
  } 
 delay(1000);
  }

