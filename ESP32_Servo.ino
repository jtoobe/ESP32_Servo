#include <ESP32Servo.h>
Servo miServo;  // Creo un objeto servo para controlarlo
int pos = 0;    // variable que guarda la posicion

void setup() {
  miServo.attach(26);  // Defino en que pin va conectado el servo
}

void loop() {
for (pos = 0; pos <= 180; pos += 1) { // va de 0 grados a 180 grados
    // in steps of 1 degree
    miServo.write(pos);              // indicar al servo que vaya a la posición en la variable 'pos'
    delay(15);                       // espera 15 ms para que el servo alcance la posición
  }
  for (pos = 180; pos >= 0; pos -= 1) { // va de 180 grados a 0 grados
    miServo.write(pos);              // indicar al servo que vaya a la posición en la variable 'pos'
    delay(15);                       // espera 15 ms para que el servo alcance la posición
  }
}
