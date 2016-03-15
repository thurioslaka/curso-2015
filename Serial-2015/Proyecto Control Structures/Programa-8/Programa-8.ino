int comptar = 11;
int i = 0;
void setup()               
{
  Serial.begin(9600);     
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);  
   while(i <= comptar)// estructura while: se repite una y otra vez hasta que la expresion dentro del parentesis se convierte en falsa
  {
    Serial.print(i);
    Serial.print("-");
    i++;
  } 
}
void loop()   
{
}

