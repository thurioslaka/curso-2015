const int ledPin[] = {5, 6, 7, 8}; // da nombre a los pins indicados mediante un array
int ledNum = 4;    // define el numero de leds indicados

void setup()
{
  for(int i = 0; i < ledNum; i++) // Define como salidas los pins indicados mediante un bucle
  {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop()
{
  for(int i = 0; i < 16; i++) // Va mostrando del 0 al 15
  {
    for(int a = 0; a < ledNum ; a++) // Va renovando el estado de los leds
    { 
      digitalWrite(ledPin[a], bitRead(i, a));
    }
    delay(900);     
  }
}

