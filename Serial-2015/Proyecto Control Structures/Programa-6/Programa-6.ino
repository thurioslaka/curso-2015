int comptar = 10;
void setup()                    
{
  Serial.begin(9600);       
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i <= comptar; i++)// el bucle for: primero se pone la iniciacion que solo se ejecuta 1 vez, luego la condicion que si es verdadera se sigue ejecutando y si es falsa se detiene el bucle y por ultimo el incremento o decremento que se realiza cada ves que se aprueba el bucle
  {
    Serial.print(i);
    Serial.print("-");
  } 
}
void loop()     
{
}

