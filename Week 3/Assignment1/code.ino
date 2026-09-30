int a[4];

int led1 = 7;
int led2 = 6;
int led3 = 5;
int led4 = 4;

void convert(int n)
{
    for (int i = 3; i >= 0; i--)
    {
        a[i] = n % 2;
        n = n / 2;
    }
}

void setup()
{
    Serial.begin(9600);

    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);

    Serial.println("Enter a number from 0 to 15: ");
}

void loop()
{

    int n = Serial.parseInt();
    if (n < 0 || n > 15)
        return;
    convert(n);
    digitalWrite(led1, a[0]);
    digitalWrite(led2, a[1]);
    digitalWrite(led3, a[2]);
    digitalWrite(led4, a[3]);
    Serial.print("Binary: ");
    for (int i = 0; i < 4; i++)
        Serial.print(a[i]);
    Serial.println();
}