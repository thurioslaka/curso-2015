void setup ()
 {
Serial.begin(9600); // la velocidad con la que se counica el arduino con el ordenador
}
void loop ()
{ 
Serial.println(" Hello world!");// La frase que quiero que repita una y otra vez.
delay(1000); // el tiempo que quiero que espere, en este caso entre frases.
}
// la diferencia de poner el "ln" en el serial es el espacio que tiene en el texto que es como poner un enter en un documento word
