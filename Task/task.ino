int EN12 = 9;
int IN1 = 10;
int IN2 = 11;
int EN34 = 3;
int IN3 = 4;
int IN4 = 5;

int photo = A0;
int sw = 13;

void setup()
{
  pinMode(EN12, OUTPUT);
  pinMode(EN34, OUTPUT);
  
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  
  pinMode(sw, INPUT);
  pinMode(photo, INPUT);
}

void loop()
{
  int val = analogRead(photo);
  int val2= map(val,0,1023,0,255);
  int value = digitalRead(sw);
  
  if(value == HIGH)
  {
    analogWrite(EN12,val2);
  	digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    
    analogWrite(EN34,0);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,LOW);
  }
  else
  {
    analogWrite(EN12,val2);
  	digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    
    analogWrite(EN34,val2);
    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);
  }
}