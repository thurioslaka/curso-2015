const int xiulet = 9;    
const int pot0 = A0;     
int valPot0;       

void setup()
{
  pinMode(xiulet, OUTPUT);   
}

void loop()
{
  valPot0 = analogRead(pot0);    

  tone(xiulet, 700, valPot0);   
  delay(2*valPot0);  
}
