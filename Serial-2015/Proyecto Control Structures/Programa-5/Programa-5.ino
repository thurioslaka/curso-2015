int sensorReading = 2; // Definicion de variable
void setup()
{
  Serial.begin(9600);
  Serial.print("The day is "); 
   
  switch (sensorReading) { // Estructura switch: compara el valor de la variable con el valor especificado
  case 0:    
    Serial.println("dark");
    break; // Sirve para salir de la esctructura swich al cumplir la condicion 
  case 1:    
    Serial.println("dim");
    break;// Sirve para salir de la esctructura swich al cumplir la condicion
  case 2:    
    Serial.println("medium");
    break;// Sirve para salir de la esctructura swich al cumplir la condicion
  case 3:
    Serial.println("bright");
    break;// Sirve para salir de la esctructura swich al cumplir la condicion
  default:// Si la estructur no detecta la variable en ningun caso ejecuta lo que se encuentra en default
    Serial.println("... I don't know!!!");
  } 
}
void loop()
{
}
