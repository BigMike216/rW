
#include <iostream>
using namespace std;

void readSensors(int sensors[], int size)
{
    cout << "Enter 8 sensor readings:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> sensors[i];
    }
}

int calculatePosition(int sensors[], int size)
{
    int sum = 0;
    int weightedSum = 0;

    for (int i = 0; i < size; i++)
    {
        if (sensors[i] == 1)
        {
            sum++;
            weightedSum += i;
        }
    }

    if (sum == 0)
        return -1;

    return weightedSum / sum;
}

void decideMovement(int position)
{
    if (position == -1)
    {
        cout << "Line Position: Not Detected" << endl;
        cout << "Action: Line Lost" << endl;
    }
    else if (position <= 2)
    {
        cout << "Line Position: Left" << endl;
        cout << "Action: Turn Left" << endl;
    }
    else if (position >= 5)
    {
        cout << "Line Position: Right" << endl;
        cout << "Action: Turn Right" << endl;
    }
    else
    {
        cout << "Line Position: Center" << endl;
        cout << "Action: Move Forward" << endl;
    }
}

int main()
{
    int sensors[8];

    readSensors(sensors, 8);

    int position = calculatePosition(sensors, 8);

    decideMovement(position);

    return 0;
}