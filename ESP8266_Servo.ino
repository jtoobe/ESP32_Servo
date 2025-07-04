// Para mover un servo con una placa ESP8266

#include <Servo.h>

Servo servo;

void setup() {

  // cable rojo positivo 5v - cable marron GND

  // Pin de señal del servo (SG90 cable naranja)

servo.attach(2); //pin D4 del ESP8266

servo.write(0);

delay(2000);

}

void loop() {

servo.write(90);

delay(1000);

servo.write(0);

delay(1000);

}
