int num = 64;// Definicion de variable

void setup()             
{
  Serial.begin(9600); // velocidad de comunicacion entre el arduino y el ordenador 

  Serial.println("Different formats for the same number:");

  Serial.write(num);// manda escribir el numero o signo de la variable asignada
  Serial.println();
  
  Serial.println(num);
  Serial.println(num,DEC);// escribe el numero en formato decimal
  
  Serial.println(num,BIN);// escribe el numero en formato binario
  
  Serial.println(num,HEX);// escribe el numero en formato hexadecimal
  
  Serial.println(num,OCT);// escribe el numero en formato octagonal 
}

void loop()// se pone por que debe llevarlo pero no hace nada en este programa
{
}
