int thisByte = 33;// Definicion de la variable

void setup()
{
  Serial.begin(9600);
  Serial.println("ASCII table ~ Character Map");// Escribe en la primera linea lo que hay entre parenesis
}

void loop()
{
  Serial.write(thisByte);// El serial write escribe el simolo del numero representado
  Serial.print(", dec: ");// Escribe lo que hay entre parentesis
  Serial.print(thisByte);// Manda llamar la variable definida
  Serial.print(", hex: ");
  Serial.print(thisByte, HEX);//Manda llamar la variable definida en codigo hexadecimal
  Serial.print(", oct: ");
  Serial.print(thisByte, OCT);//Manda llamar la variable definida en codigo octogonal
  Serial.print(",  bin:  ");
  Serial.println(thisByte,  BIN);//Manda llamar la variable definida en codigo binario
  
  if(thisByte ==126) // Da la condicion si la variable es igual a 126
  {
    while(true)// Hace que vaya repitiendo la secuencia hasta conseguir que el valor asignado en el if sea verdadero
    {
    }
  }
  thisByte++;// Va sumando +1 a la variable thisByte
}
