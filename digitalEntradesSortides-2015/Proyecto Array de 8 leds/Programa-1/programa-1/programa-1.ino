const int led0 = 5;  // Pone el nombre al pin indicado
const int led1 = 6;  // Pone el nombre al pin indicado  
const int led2 = 7;  // Pone el nombre al pin indicado  
const int led3 = 8;  // Pone el nombre al pin indicado   
const int led4 = 9;  // Pone el nombre al pin indicado 
const int led5 = 10; // Pone el nombre al pin indicado  
const int led6 = 11; // Pone el nombre al pin indicado  
const int led7 = 12; // Pone el nombre al pin indicado

void setup()
{
  pinMode(led0, OUTPUT);   // Define el pin como salida
  pinMode(led1, OUTPUT);   // Define el pin como salida
  pinMode(led2, OUTPUT);   // Define el pin como salida
  pinMode(led3, OUTPUT);   // Define el pin como salida
  pinMode(led4, OUTPUT);   // Define el pin como salida
  pinMode(led5, OUTPUT);   // Define el pin como salida  
  pinMode(led6, OUTPUT);   // Define el pin como salida
  pinMode(led7, OUTPUT);   // Define el pin como salida
}

void loop()
{
  digitalWrite(led0, HIGH);  // Da tension al pin
  digitalWrite(led1, HIGH);  // Da tension al pin
  digitalWrite(led2, HIGH);  // Da tension al pin
  digitalWrite(led3, HIGH);  // Da tension al pin
  digitalWrite(led4, HIGH);  // Da tension al pin
  digitalWrite(led5, HIGH);  // Da tension al pin
  digitalWrite(led6, HIGH);  // Da tension al pin
  digitalWrite(led7, HIGH);  // Da tension al pin
  
  delay(700);    //Retraso de 700 ms para que se queden los leds encendidos
  
  digitalWrite(led0, LOW);  // Quita la tension al pin
  digitalWrite(led1, LOW);  // Quita la tension al pin
  digitalWrite(led2, LOW);  // Quita la tension al pin
  digitalWrite(led3, LOW);  // Quita la tension al pin
  digitalWrite(led4, LOW);  // Quita la tension al pin
  digitalWrite(led5, LOW);  // Quita la tension al pin
  digitalWrite(led6, LOW);  // Quita la tension al pin
  digitalWrite(led7, LOW);  // Quita la tension al pin
  
  delay(500);    // Retraso de 700 ms para que se queden los leds apagados
}
