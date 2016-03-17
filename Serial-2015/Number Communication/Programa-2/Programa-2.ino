const int ledPin = 13;
long num;
void setup() {
  Serial.begin(9600);
  Serial.print("Entrar un numero, ");
  pinMode(ledPin, OUTPUT); 
}
void loop() {
  while (Serial.available() > 0) {
    num = Serial.parseInt(); 
    Serial.print("el ");
    Serial.print(num);
    if (Serial.read() == '\n') { 
      if ( num % 2 == 0){
        Serial.println(" es parell.");
      }
      else{
        Serial.println(" es imparell.");
      }
      Serial.println("");
      Serial.print("Entrar un numero, ");
    }
  }
}
