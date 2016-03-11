int tempAigua = 101; //Definicion de variable 

void setup()
{
  Serial.begin(9600);
  
  if ( tempAigua > 100)// Condicional si la variable tempAigua es mayor a 100
  {
    Serial.print("Aigua supera els 100C, esta bullint!");// Envia el mensaje dentro del parentesis
  }
}

void loop()// No hace nada pero todo programa debe llevarlo
{
}
