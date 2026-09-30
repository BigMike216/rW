#include <iostream>
using namespace std;

int main()
{
    int number;
    int digitCount[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    cout << "Enter a number: \n";
    cin >> number;
    if (number == 0)
    {
        digitCount[0] = 1;
    }
    else
    {
        while (number != 0)
        {
            int i = number % 10;
            digitCount[i]++;
            number = number / 10;
        }
    }

    cout << "Digit Frequencies:\n";
    for (int i = 0; i < 10; i++)
    {
        if (digitCount[i] != 0)
        {
            cout << "Digit " << i << " appears " << digitCount[i] << " times\n";
        }
    }
    return 0;
}