int pot = A5;
int led = 3;

float myMap(int value, int inMin, int inMax, float outMin, float outMax)
{
  return (float)((value-inMin)*(outMax-outMin))/((inMax-inMin)+outMin);
}

void setup()
{
  pinMode(pot, INPUT);
  pinMode(led, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  int potValue = analogRead(pot);

  float brightness = myMap(potValue, 0, 1023, 0, 255);

  analogWrite(led, brightness);
  
  Serial.print("Potentiometer: ");
  Serial.print(potValue);
  Serial.print("  Brightness: ");
  Serial.println(brightness);

  delay(500);
}