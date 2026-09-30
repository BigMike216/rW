int led = 3;
int trig = 11;
int echo = 10;

long time;
int distance;
float val;

float customMap(float input, float iMin, float iMax,
                float oMin, float oMax)
{
  return (input-iMin)*(oMax-oMin)/(iMax-iMin)+oMin;
}

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);

  digitalWrite(trig, LOW);

  time = pulseIn(echo, HIGH);
  distance = time * 0.0343 / 2;

  if (distance < 20 || distance > 200)
  {
    digitalWrite(led, LOW);
    val = 0;
  }
  else
  {
    val = customMap(distance, 20, 200, 0, 255);
    analogWrite(led, (int)val);
  }
  
  Serial.print(distance);
  Serial.print("  ");
  Serial.println(val);
}