#include <iostream>
using namespace std;

int main()
{
    const int N = 10;
    float readings[N];
    float max = readings[0];
    float min = readings[0];
    float sum = 0;
    int below = 0, above = 0;

    cout << "Enter 10 distance readings (in cm): \n";
    for (int i = 0; i < N; i++)
    {
        cout << "Reading " << (i + 1) << ": ";
        cin >> readings[i];
    }

    for (int i = 1; i < N; i++) // max and min reading
    {
        if (readings[i] > max)
        {
            max = readings[i];
        }
        if (readings[i] < min)
        {
            min = readings[i];
        }
    }

    for (int i = 0; i < N; i++) // find avg
    {
        sum += readings[i];
    }
    double average = sum / N;

    for (int i = 0; i < N; i++) // below 20 and above 100
    {
        if (readings[i] < 20)
        {
            below++;
        }
        if (readings[i] > 100)
        {
            above++;
        }
    }

    cout << "Maximum reading: " << max << " cm\n";
    cout << "Minimum reading: " << min << " cm\n";
    cout << "Average reading: " << average << " cm\n";
    cout << "Readings below 20 cm: " << below << "\n";
    cout << "Readings above 100 cm: " << above << "\n";

    return 0;
}