int red = 6;
int yellow = 5;
int green = 3;
int pot = A5;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(pot, INPUT);

  Serial.begin(9600);
}

void loop()
{
  int val = analogRead(pot);

  if (val >= 0 && val <= 340)
  {
    int brightness = map(val, 0, 340, 0, 255);
    
    analogWrite(green, brightness);
    analogWrite(yellow, 0);
    analogWrite(red, 0);

    Serial.print("Potentiometer: ");
    Serial.print(val);
    Serial.print("  Led: Green  Brightness: ");
    Serial.println(brightness);
  }
  
  else if (val >= 341 && val <= 680)
  {
    int brightness = map(val, 341, 680, 0, 255);

    analogWrite(green, 0);
    analogWrite(yellow, brightness);
    analogWrite(red, 0);

    Serial.print("Potentiometer: ");
    Serial.print(val);
    Serial.print("  Led: Yellow  Brightness: ");
    Serial.println(brightness);
  }

  else if (val >= 681 && val <= 1023)
  {
    int brightness = map(val, 681, 1023, 0, 255);

    analogWrite(green, 0);
    analogWrite(yellow, 0);
    analogWrite(red, brightness);

    Serial.print("Potentiometer: ");
    Serial.print(val);
    Serial.print("  Led: Red  Brightness: ");
    Serial.println(brightness);
  }
  delay(500);
}