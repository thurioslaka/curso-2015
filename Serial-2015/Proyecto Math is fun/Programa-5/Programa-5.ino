int drive_gb = 100; // Se define la variable
long drive_mb; // definimos la variable en tipo long por el numero de bits utilizados
void setup()
{
  Serial.begin(9600); // velocidad de comunicacion del arduino con el monitor
  Serial.print("Your HD is "); // Escribe lo que puse entre parentesis
  Serial.print(drive_gb);// Escribe la variable antes definida
  Serial.println(" GB large");// Escribe lo que puse entre parentesis
  
  drive_mb = drive_gb; 
  drive_mb = drive_mb * 1024;// Le decimos que la segunda variable tendra el valor de la primera * 1024
  
  Serial.print("It can store ");
  Serial.print(drive_mb); //LLamamos la variable ya modificada
  Serial.println(" Megabytes!");
}
void loop()
{
}
