const int segA = 5;  // Da nombre al pin del arduino
const int segB = 6;  
const int segC = 7;  
const int segD = 8;  
const int segE = 9;  
const int segF = 10; 
const int segG = 11;  

void setup()
{
  pinMode(segA, OUTPUT); // Define el pin indicado como salida
  pinMode(segB, OUTPUT); 
  pinMode(segC, OUTPUT); 
  pinMode(segD, OUTPUT); 
  pinMode(segE, OUTPUT); 
  pinMode(segF, OUTPUT); 
  pinMode(segG, OUTPUT); 
  
  digitalWrite(segA, HIGH);   
  digitalWrite(segB, HIGH);     
  digitalWrite(segC, HIGH);     
  digitalWrite(segD, HIGH);     
  digitalWrite(segE, HIGH); 
  digitalWrite(segF, HIGH);    
  digitalWrite(segG, LOW);      

  delay(700);  
}
void loop()
{
  digitalWrite(segA, LOW);           
  digitalWrite(segD, LOW);     
  digitalWrite(segE, LOW);     
  digitalWrite(segF, LOW);      
  
  delay(700);            
  
  digitalWrite(segA, HIGH);           
  digitalWrite(segC, LOW);     
  digitalWrite(segD, HIGH);     
  digitalWrite(segE, HIGH);     
  digitalWrite(segG, HIGH);    
    
  delay(700);  
  
  digitalWrite(segC, HIGH);           
  digitalWrite(segE, LOW);  
    
  delay(700);     
  
  digitalWrite(segA, LOW);      
  digitalWrite(segD, LOW);     
  digitalWrite(segF, HIGH);   
      
  delay(700);   
  
  digitalWrite(segA, HIGH);  
  digitalWrite(segB, LOW); 
  digitalWrite(segD, HIGH); 
        
  delay(700);  
  
  digitalWrite(segA, LOW);          
  digitalWrite(segE, HIGH);  
          
  delay(700);    
  
  digitalWrite(segA, HIGH); 
  digitalWrite(segB, HIGH);  
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW); 
            
  delay(700);  
  
  digitalWrite(segD, HIGH);   
  digitalWrite(segE, HIGH); 
  digitalWrite(segF, HIGH);    
  digitalWrite(segG, HIGH); 
              
  delay(700);  
  
  digitalWrite(segD, LOW); 
  digitalWrite(segE, LOW); 
                
  delay(700);  
  
  digitalWrite(segD, HIGH);     
  digitalWrite(segE, HIGH);    
  digitalWrite(segG, LOW);     

  delay(700);     
}

