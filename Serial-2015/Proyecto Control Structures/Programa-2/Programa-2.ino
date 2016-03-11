int tempAigua = 99; //Definicion de variable 

void setup()
{
  Serial.begin(9600);
  
  if (tempAigua < 100)  // Condicional si la variable tempAigua es menor a 100
  {
    Serial.print("Aigua encara no bull!");// Envia el mensaje dentro del parentesis
  }
  else if (tempAigua >=100)  // Condicion si la variable es mayor o igual a 100
  {
    Serial.print("Aigua bullint!");
  }
}

void loop()// No hace nada pero todo programa debe llevarlo
{
}
