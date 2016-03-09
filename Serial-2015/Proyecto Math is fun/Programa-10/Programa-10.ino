float a = 3; //variable float para hacer la expresion en decimales
float b = 2; //variable float para hacer la expresion en decimales
float d; //variable float para hacer la expresion en decimales
void setup()
{
  Serial.begin(9600);// velocidad de comunicacion con el ordenador
  Serial.println("Aqui esta la divicion:");
  Serial.print( " a = ");
  Serial.println(a);
  Serial.print(" b = ");
  Serial.println(b);
  
  d = a/b;  //Divicion de las variables
  
  Serial.print(" a / b =");
  Serial.println(d);
}
void loop()
{
}
