int sw1 = 9;
int sw2 = 8;

int g_led = 4;
int y_led = 3;
int r_led = 2;

void setup()
{
    pinMode(sw1, INPUT);
    pinMode(sw2, INPUT);

    pinMode(g_led, OUTPUT);
    pinMode(y_led, OUTPUT);
    pinMode(r_led, OUTPUT);

    Serial.begin(9600);
}

void loop()
{
    int s1 = digitalRead(sw1);
    int s2 = digitalRead(sw2);

    if (s1 == HIGH && s2 == HIGH)
    {
        //forward
        digitalWrite(g_led, HIGH);
        digitalWrite(y_led, LOW);
        digitalWrite(r_led, LOW);

        Serial.println("Moving Forward");
    }
    else if (s1 == LOW && s2 == HIGH)
    {
        //backward
        digitalWrite(g_led, LOW);
        digitalWrite(y_led, LOW);
        digitalWrite(r_led, HIGH);

        Serial.println("Moving Backward");
    }
    else
    {
        //stopped
        digitalWrite(g_led, LOW);
        digitalWrite(y_led, HIGH);
        digitalWrite(r_led, LOW);

        Serial.println("Robot Stopped");
    }

    delay(500);
}