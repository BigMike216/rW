int trig = 10;
int echo = 9;
int red = 6;
int yellow = 5;
int green = 3;

int pot = A5;

void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(pot, INPUT);

  Serial.begin(9600);
}

void loop()
{
  int potValue = analogRead(pot);
  int warningDistance = map(potValue, 0, 1023, 10, 50);

  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  long duration = pulseIn(echo, HIGH);

  float distance = duration * 0.034 / 2;

  if (distance > warningDistance)
  {
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.print(" cm  Warning Distance: ");
    Serial.print(warningDistance);
    Serial.println(" cm  Status: SAFE");
  }

  else if (distance > warningDistance / 2)
  {
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(red, LOW);

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.print(" cm  Warning Distance: ");
    Serial.print(warningDistance);
    Serial.println(" cm  Status: GETTING CLOSE");
  }

  else
  {
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.print(" cm  Warning Distance: ");
    Serial.print(warningDistance);
    Serial.println(" cm  Status: DANGER");
  }
  delay(500);
}