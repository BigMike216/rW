# Assignment 3 — Custom Map Function

## 1. Aim

To create and implement a custom map function instead of using Arduino's built-in map() function.

## 2. Working Principle

The custom map function converts a value from one range into a corresponding value in another range.

For example, an analog input value from 0–1023 can be converted into a required range such as 10–50.

## 3. Program Explanation

The custom function takes the input value, input range and output range as parameters. It then calculates the corresponding value in the new range using a mathematical formula.

The function was used in the Arduino program instead of the built-in map() function.

## 4. Program

The complete implementation is available in `code.ino`.

## 5. Result

A custom map function was successfully created and implemented to convert values between different ranges without using Arduino's built-in map() function.