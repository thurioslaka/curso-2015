const int pin = 8;

int note = 1047;
int velocitat = 10;

void setup()
{
}

void loop()
{
 punt();
  punt();
  punt();
  punt();
  //Espai entre lletres
  espaiL();
  //O
  punt();
  espaiL();
ratlla();
  punt();
  ratlla();
  punt();
  espaiL();
  punt();
  punt();
  punt();
  punt();
      espaiL();
  ratlla();
  ratlla();
  ratlla();
   espaiP();
   punt();
   ratlla();
   ratlla();
   punt();
       espaiL();
  ratlla();
  ratlla();
  ratlla();
  espaiL();
  punt();
   ratlla();
  punt(); 
  espaiP();
  punt();
   ratlla();
  punt();
  espaiL();
  punt();
   ratlla();
   espaiL();
   ratlla();
  ratlla();
  espaiL();
   ratlla();
  ratlla();
  ratlla();
  espaiL();
  ratlla();
  punt();
  espaiP();
}

void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocitat));  
}

void espaiP()  //Espai entre paraules
{   
  delay(6*(1000/velocitat));  
}

