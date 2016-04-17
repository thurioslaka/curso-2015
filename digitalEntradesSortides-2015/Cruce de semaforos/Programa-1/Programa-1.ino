const int semaforAR = 7;  // Da nombre al pin indicado
const int semaforAT = 8;  
const int semaforAV = 9;  
const int semaforBR = 10; 
const int semaforBT = 11; 
const int semaforBV = 12; 

void setup()
{
  pinMode(semaforAR, OUTPUT);  // Define el pin como salida
  pinMode(semaforAT, OUTPUT);  
  pinMode(semaforAV, OUTPUT);  
  pinMode(semaforBR, OUTPUT);  
  pinMode(semaforBT, OUTPUT);  
  pinMode(semaforBV, OUTPUT);  
  
  digitalWrite(semaforAR, HIGH); // Da tension al pin indicado
  digitalWrite(semaforAT, LOW);  // Quita tension al pin indicado
  digitalWrite(semaforAV, LOW);  
  digitalWrite(semaforBR, HIGH); 
  digitalWrite(semaforBT, LOW);  
  digitalWrite(semaforBV, LOW);    
  
  delay(100);  
}
void loop()
{
  digitalWrite(semaforBR, LOW);  
  digitalWrite(semaforBV, HIGH); 
  
  delay(400);   
  
  digitalWrite(semaforBV, LOW);  
  digitalWrite(semaforBT, HIGH); 
  
  delay(100);    
  
  digitalWrite(semaforBT, LOW);  
  digitalWrite(semaforBR, HIGH); 
   
  delay(100);    
  
  digitalWrite(semaforAR, LOW);  
  digitalWrite(semaforAV, HIGH); 
  
  delay(400);   
  
  digitalWrite(semaforAV, LOW); 
  digitalWrite(semaforAT, HIGH); 
  
  delay(100);   
  
  digitalWrite(semaforAT, LOW); 
  digitalWrite(semaforAR, HIGH); 
  
   delay(100); 
}
