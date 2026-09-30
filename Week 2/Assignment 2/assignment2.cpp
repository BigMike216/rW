
#include <iostream>
using namespace std;

class Robot
{
private:
    int speed;
    int battery;

public:
    void setSpeed(int value)
    {
        if (value >= 0 && value <= 100)
            speed = value;
        else
            speed = 0;
    }

    void setBattery(int value)
    {
        if (value >= 0 && value <= 100)
            battery = value;
        else
            battery = 0;
    }

    void moveForward()
    {
        if (battery == 0)
        {
            cout << "Battery empty. Robot cannot move." << endl;
            return;
        }

        cout << "Moving Forward" << endl;
        battery -= 5;
    }

    void moveBackward()
    {
        if (battery == 0)
        {
            cout << "Battery empty. Robot cannot move." << endl;
            return;
        }

        cout << "Moving Backward" << endl;
        battery -= 5;
    }

    void turnLeft()
    {
        if (battery == 0)
        {
            cout << "Battery empty. Robot cannot move." << endl;
            return;
        }

        cout << "Turning Left" << endl;
        battery -= 5;
    }

    void turnRight()
    {
        if (battery == 0)
        {
            cout << "Battery empty. Robot cannot move." << endl;
            return;
        }

        cout << "Turning Right" << endl;
        battery -= 5;
    }

    void displayStatus()
    {
        cout << "Robot Speed: " << speed << endl;
        cout << "Battery: " << battery << "%" << endl;
    }
};

int main()
{
    Robot robot;
    int speed, battery;

    cout << "Enter Speed:\n";
    cin >> speed;

    cout << "Enter Battery:\n";
    cin >> battery;

    robot.setSpeed(speed);
    robot.setBattery(battery);

    robot.moveForward();
    robot.turnLeft();
    robot.moveForward();
    robot.turnRight();

    cout << endl;

    robot.displayStatus();

    return 0;
}
