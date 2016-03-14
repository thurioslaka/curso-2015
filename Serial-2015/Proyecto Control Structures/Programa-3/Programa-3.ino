int tempAigua = 95; //Definicion de variable 

void setup()
{
  Serial.begin(9600);
  
  if (tempAigua > 100)  // Condicional if, si la variable es mayor a 100
  {
    Serial.print("Aigua bullint!");// Envia el mensaje dentro del parentesis
  }
  else if (tempAigua == 100)  // Condicion si la variable es igual a 100
  {
    Serial.print("Aigua a 100C!");
  }
  else if ( (tempAigua >= 90) && (tempAigua < 100))// Condicional con and, si la variable es mayor o igual a 90 y menor a 100
  {
    Serial.print (" Aigua apunt de bullir");
  }
  else // Sin condicional
  {
    Serial.print(" Aigua encara no bull");
  }
}

void loop()// No hace nada pero todo programa debe llevarlo
{
}
