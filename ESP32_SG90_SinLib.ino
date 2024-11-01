int servoPin = 5;
int buttonPin = 14;

int buttonPin2 = 17;

void setup()
{
  Serial.begin(115200);
  Serial.println("poor man's servo sweep");

  //turn off L13
  //pinMode(LED_BUILTIN, OUTPUT);
  //digitalWrite(LED_BUILTIN, LOW);

  pinMode(servoPin, OUTPUT);
  digitalWrite(servoPin, LOW);

  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);

} //setup

void loop()
{
  Serial.print("one side...");
  while (digitalRead(buttonPin) == HIGH)
  {
    digitalWrite(servoPin, HIGH);
    delayMicroseconds(1900);    //position
    digitalWrite(servoPin, LOW);
    delayMicroseconds(18100);   //balance of 20000 cycle
  }

  Serial.println("other side");
  while (!digitalRead(buttonPin) == HIGH)  //oops... that said HIGH by mistake, no wait, HIGH is correct, I forgot I had the ! there for not
  {
    digitalWrite(servoPin, HIGH);
    delayMicroseconds(100);    //position
    digitalWrite(servoPin, LOW);
    delayMicroseconds(18900);   //balance of 20000 cycle
  }

  Serial.print("one side2...");
  while (digitalRead(buttonPin2) == HIGH)
  {
    digitalWrite(servoPin, HIGH);
    delayMicroseconds(900);    //position
    digitalWrite(servoPin, LOW);
    delayMicroseconds(18100);   //balance of 20000 cycle
  }

  Serial.println("other side2");
  while (!digitalRead(buttonPin2) == HIGH)  //oops... that said HIGH by mistake, no wait, HIGH is correct, I forgot I had the ! there for not
  {
    digitalWrite(servoPin, HIGH);
    delayMicroseconds(100);    //position
    digitalWrite(servoPin, LOW);
    delayMicroseconds(18900);   //balance of 20000 cycle
  }


} //loop