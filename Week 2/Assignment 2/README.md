# Assignment 2 — Robot Class

## 1. Aim

To develop a C++ program using a Robot class to control robot movement and manage its speed and battery level.

## 2. Problem Statement

Create a Robot class with private data members for speed and battery. The program must validate their values, perform movement operations, reduce the battery after each movement, and display the final robot status.

The robot must not move when its battery level reaches 0%.

## 3. Concepts Used

* Classes and objects
* Encapsulation and private data members
* Member functions
* Conditional statements
* Input and output operations

## 4. Algorithm

1. Start.
2. Create a Robot class with private speed and battery variables.
3. Define functions to set speed and battery values within the range 0–100.
4. Create movement functions for forward, backward, left, and right.
5. Check the battery before every movement.
6. If the battery is available, perform the movement and reduce it by 5%.
7. Create a Robot object in `main()`.
8. Read speed and battery values from the user.
9. Execute the movement commands.
10. Display the final speed and battery level.
11. Stop.

## 5. Program Explanation

The program uses a Robot class to represent the robot. Its speed and battery variables are declared private to support encapsulation.

The `setSpeed()` and `setBattery()` functions validate the input values. Separate member functions perform the four movement operations.

Before moving, each function checks whether the battery is empty. If the battery is available, the movement is performed and the battery level is reduced by 5%.

Finally, `displayStatus()` displays the robot's speed and remaining battery level.

## 6. Sample Output

Input:
Speed: 80
Battery: 100

Commands:
Forward
Left
Forward
Right

Output:
Moving Forward
Turning Left
Moving Forward
Turning Right

Robot Speed: 80
Battery: 80%

## 7. Result

The program was implemented successfully using a Robot class to control movement, validate speed and battery values, and update the battery level after each movement.
