int a = 3;
int b = 2;
int d;
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
