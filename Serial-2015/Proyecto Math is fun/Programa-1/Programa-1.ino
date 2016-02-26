int a = 5; // Definicion de variable
int b = 10;// Definicion de variable
int c = 20;// Definicion de variable
void setup()// Se ejecuta 1 sola vez
{
  Serial.begin(9600); // velocidad de conexion del arduino con el programa
  
  Serial.println( "un poco de matematicas: ");// Envia el mensaje con un espacio hacia abajo
  
  Serial.print("a = ");// En otra linia escribe lo que esta enre comillas
  Serial.println(a);// Escribe el valor de a
  Serial.print("b = ");// En otra linia escribe lo que esta enre comillas
  Serial.println(b);// Escribe el valor de b
  Serial.print("c = ");// En otra linia escribe lo que esta enre comillas
  Serial.println(c);// Escribe el valor de c
  
  Serial.print("a + b =");// En otra linia escribe lo que esta enre comillas
  Serial.println(a + b);// Hace la suma 
  Serial.print("a * c = ");// En otra linia escribe lo que esta enre comillas
  Serial.println(a * c);// Hace la multiplicacion
  
  Serial.print("c / b = ");// En otra linia escribe lo que esta enre comillas
  Serial.println( c / b);// Hace la divicion
  
  Serial.print("c % b = ");// En otra linia escribe lo que esta enre comillas
  Serial.print(c % b);
  
  Serial.print("b - c =");// En otra linia escribe lo que esta enre comillas
  Serial.println(b - c);// Hace la resta
}

void loop() // Aun que en este programa no haga nada es necesario ponerlo
{
}

