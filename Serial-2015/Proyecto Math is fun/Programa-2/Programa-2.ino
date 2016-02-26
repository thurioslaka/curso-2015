int a=3;// Definicion de variable
int b=4;// Definicion de variable
int h;

void setup()
{
  Serial.begin(9600);//Conexion arduino con el programa
  
  Serial.println("Calculando hipotenusa");// Escribe lo que hay entre las comillas
  
  Serial.print("a = ");//Escribe lo que hay entre comillas
  Serial.println(a);// Escribe la variable que puse antes
  Serial.print("b = ");//Escribe lo que hay entre comillas
  Serial.println(b);//Escribe la variable que puse antes
  Serial.print(" h = ");//Escribe lo que hay entre comillas
  Serial.print(sqrt(pow(a,2)+pow(b,2)));// Calculo de la hipotenusa
}
void loop()//No hace nada pero todo programa debe llevarlo
{
}

