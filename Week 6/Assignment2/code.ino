int led1 = 6;
int led2 = 3;
int pot = A5;

int val;
int brightness1;
int brightness2;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(pot, INPUT);

  Serial.begin(9600);
}

void loop()
{
  val = analogRead(pot);
  
  brightness1 = map(val,0,1023,0,255);
  brightness2 = 255 - brightness1;

  analogWrite(led1, brightness1);
  analogWrite(led2, brightness2);

  Serial.print(val);
  Serial.print("  ");
  Serial.print(brightness1);
  Serial.print("  ");
  Serial.println(brightness2);
}