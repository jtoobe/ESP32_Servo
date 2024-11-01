int servoPin = 5;
int buttonPin = 14; // mueve el servo hacia un lado

int buttonPin2 = 17; // mueve el servo hacia el otro lado

void setup()
{
  Serial.begin(115200);
  Serial.println("Como manejar un servo SG90 sin librerias");


  pinMode(servoPin, OUTPUT);
  digitalWrite(servoPin, LOW);

  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);

} //setup

void loop()
{
  Serial.print("hacia un lado");
  while (digitalRead(buttonPin) == HIGH)
  {
    digitalWrite(servoPin, HIGH);
    delayMicroseconds(1900);    //posicion
    digitalWrite(servoPin, LOW);
    delayMicroseconds(18100);   // frecuencia servo
  }

  Serial.println("hacia el centro");
  while (!digitalRead(buttonPin) == HIGH)  
  {
    digitalWrite(servoPin, HIGH);
    delayMicroseconds(100);    
    digitalWrite(servoPin, LOW);
    delayMicroseconds(18900);   
  }

  Serial.print("al otro lado");
  while (digitalRead(buttonPin2) == HIGH)
  {
    digitalWrite(servoPin, HIGH);
    delayMicroseconds(900);     
    digitalWrite(servoPin, LOW);
    delayMicroseconds(18100);    
  }

  Serial.println("al centro");
  while (!digitalRead(buttonPin2) == HIGH)  
  {
    digitalWrite(servoPin, HIGH);
    delayMicroseconds(100);     
    digitalWrite(servoPin, LOW);
    delayMicroseconds(18900);   
  }


} //loop
