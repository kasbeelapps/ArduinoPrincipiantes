/*
 * 
  Intercalar encendido y apagado de dos led, en el pin 8 y 9 cada 1 segundo
  http://www.kasbeel.cl
  https://www.youtube.com/channel/UC-FpCzcWJM0Zil69RVWOcEg
  
*/

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(8, OUTPUT); // Seteamos el pin 8 como de salida.
  pinMode(9, OUTPUT); // Seteamos el pin 9 como de salida.
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(8, HIGH);   // Encendemos el led conectado al pin 8
  digitalWrite(9, LOW);   // Apagamos el led conectado al pin 9
  delay(1000);                       // Esperamos 1 segundo
  digitalWrite(8, LOW);    // // Apagamos el led conectado al pin 8
  digitalWrite(9, HIGH);    // Encendemos el led conectado al pin 9
  delay(1000);                       // Esperamos 1 segundo
}
