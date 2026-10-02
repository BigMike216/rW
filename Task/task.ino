int EN12 = 8;
int IN1 = 9;
int IN2 = 10;
int EN34 = 2;
int IN3 = 3;
int IN4 = 4;

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
  
  if(value == 1)
  {
    digitalWrite(EN12,HIGH);
  	analogWrite(IN1,val2);
    analogWrite(IN2,0);
    
    analogWrite(IN1,0);
    analogWrite(IN2,0);
  }
  else
  {
    analogWrite(IN1,val2);
    analogWrite(IN2,0);
    
    analogWrite(IN1,val2);
    analogWrite(IN2,0);
  }
}