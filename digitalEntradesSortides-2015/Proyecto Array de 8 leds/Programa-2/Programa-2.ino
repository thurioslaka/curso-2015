const int led0 = 5;    // Pone nombre al pin indicado
const int led1 = 6;     
const int led2 = 7;    
const int led3 = 8;    
const int led4 = 9;     
const int led5 = 10;     
const int led6 = 11;     
const int led7 = 12;   

void setup()
{
  pinMode(led0, OUTPUT);   // Define el pin como salida
  pinMode(led1, OUTPUT);  
  pinMode(led2, OUTPUT);   
  pinMode(led3, OUTPUT);   
  pinMode(led4, OUTPUT);  
  pinMode(led5, OUTPUT);   
  pinMode(led6, OUTPUT);    
  pinMode(led7, OUTPUT);   
}
void loop()
{
  digitalWrite(led0, HIGH);  // Da tension al pin
  digitalWrite(led1, LOW);   // Quita tension al pin
  digitalWrite(led2, HIGH);   
  digitalWrite(led3, LOW);    
  digitalWrite(led4, HIGH);   
  digitalWrite(led5, LOW);    
  digitalWrite(led6, HIGH);  
  digitalWrite(led7, LOW);   
  
  delay(700);       // Espera 700 ms
  
  digitalWrite(led0, LOW);     
  digitalWrite(led1, HIGH);   
  digitalWrite(led2, LOW);     
  digitalWrite(led3, HIGH);    
  digitalWrite(led4, LOW);     
  digitalWrite(led5, HIGH);   
  digitalWrite(led6, LOW);   
  digitalWrite(led7, HIGH);    
  
  delay(700);      // Espera 700 ms
}
