int EN2 = 5;
int IN3 = 3;
int IN4 = 2;
int pot = A5;
int speed;

void setup()
{
  pinMode(EN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(pot, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  int val = analogRead(pot);
  speed = map(val, 0, 1023, 0, 255);

  analogWrite(EN2, speed);
  
  Serial.println(speed);
}