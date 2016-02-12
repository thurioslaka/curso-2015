void setup ()
 {
Serial.begin(9600); // la velocidad con la que se counica el arduino con el ordenador
}
void loop ()
{ // como quiero que repita la frase una y otra vez lo pongo en el loop 
Serial.print(" Hello world!");// La frase que quiero que repita una y otra vez.
delay(1000); // el tiempo que quiero que espere, en este caso entre frases.
}
