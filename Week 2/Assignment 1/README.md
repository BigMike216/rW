# Assignment 1 — Autonomous Line-Following Robot

## 1. Aim

To develop a C++ program that determines the position of a black line using 8 IR sensors and decides the movement of a robot.

## 2. Problem Statement

An autonomous robot uses 8 IR sensors arranged from left to right to detect a black line. Each sensor returns 0 for a white surface and 1 for a black line.

The program takes sensor readings as input, calculates the line position, and decides whether the robot should turn left, turn right, move forward, or stop due to a lost line.

## 3. Concepts Used

* Arrays to store sensor readings.
* Functions to divide the program into separate tasks.
* Loops to process sensor values.
* Conditional statements to determine robot movement.
* Weighted average to calculate the line position.

## 4. Algorithm

1. Start.
2. Declare an array of size 8.
3. Read all 8 sensor values using a function.
4. Calculate the number of active sensors and their weighted sum using sensor indices.
5. If no sensor detects the line, return -1.
6. Otherwise, calculate the average sensor index.
7. Decide the line position based on the calculated index.
8. Display the line position and corresponding movement.
9. Stop.

## 5. Program Explanation

The program uses three separate functions: `readSensors()` reads the sensor values, `calculatePosition()` calculates the line position, and `decideMovement()` determines the robot's action.

The line position is calculated by adding the indices of all active sensors and dividing the sum by the number of active sensors. If no sensor detects the line, the function returns -1.

Based on the calculated position, the robot turns left, turns right, or moves forward. If no line is detected, it displays "Line Lost".

## 6. Sample Output

Input:
0 0 1 1 1 0 0 0

Output:
Line Position: Center
Action: Move Forward

## 7. Result

The program was implemented successfully to calculate the line position using IR sensor readings and determine the robot's movement.
