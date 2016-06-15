        
  void setup(){
    Serial.begin(9600);
    pinMode(7,OUTPUT);
    pinMode(6,OUTPUT);
  }
  void loop(){
    int moisture = analogRead(A0);
    Serial.println(moisture);
    int moisture2=analogRead(A1);
    Serial.println(moisture2);
    
    Serial.println("");
    if(analogRead(A0)<200){
      Serial.println("Too much water");
    }
  else if (analogRead(A0)>200 && analogRead(A0)<600){
    Serial.println("I feel so comfortable  :) ");
   
    digitalWrite(7,HIGH);
    delay(1000);   
    digitalWrite(6,LOW);
  
    
  }
  
  
  else if (analogRead(A0)>600){
    Serial.println("I am thirsty, please give me water  :( ");
    digitalWrite(6,HIGH);
    delay(1000);
    digitalWrite(7,LOW);
    
  
    
  }
  
  }
                     
   
 
 
 
           
 
 
                         
   
        
       
     
  
        
     
                 
   
  
             
                           
   
  
              
                        
     
                                
  
  
