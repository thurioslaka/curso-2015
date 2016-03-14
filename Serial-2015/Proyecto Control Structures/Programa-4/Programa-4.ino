float kgCO2m2 = 10;// Como se usan puntos decimales usamos el float

void setup()              
{
  Serial.begin(9600);     

  if ( kgCO2m2 < 3.5)
  {
    Serial.print("A!");
  } 
else if ( kgCO2m2 < 6.5)
 {
    Serial.print("B!");
  } 
else if ( kgCO2m2 < 11.1)
 {
    Serial.print("C!");
  } 
else if ( kgCO2m2 < 17.7)
 {
    Serial.print("D!");
  }
else if ( kgCO2m2 < 38.2)
 {
    Serial.print("E!");
  }
else if ( kgCO2m2 < 43.2)
 {
    Serial.print("F!");
  }
else
 {
    Serial.print("G!");
  } 
}
void loop()  
{
}
