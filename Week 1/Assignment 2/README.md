# Assignment 2 — Digit Frequency

## 1. Aim

To write a C++ program that counts the frequency of each digit from 0 to 9 in a given number using arrays and loops.

## 2. Problem Statement

Write a program that accepts an integer and determines how many times each digit occurs.

The program must use an array of size 10 to store digit frequencies, extract individual digits, and display only the digits that occur in the number. The input 0 must be handled separately.

## 3. Concepts Used

* Arrays: To store the frequency of each digit.
* While loops: To extract digits from the number.
* For loops: To check all digit frequencies.
* If statements: To print only digits that occur.
* Modulus and integer division: To extract and remove digits.

## 4. Algorithm

1. Start.
2. Declare an array of size 10 and initialize all elements to zero.
3. Read an integer from the user.
4. If the number is 0, increment the frequency of digit 0.
5. Otherwise, extract the last digit using the modulus operator.
6. Increment the corresponding frequency count.
7. Remove the last digit using integer division by 10.
8. Repeat until all digits are processed.
9. Traverse the frequency array and display digits with non-zero counts.
10. Stop.

## 5. Program Explanation

The program uses an array of size 10, where each index represents a digit from 0 to 9. All frequency counts are initially set to zero.

The modulus operator extracts the last digit of the number, and its corresponding array element is incremented. Integer division by 10 removes the last digit, allowing the process to continue until the number is fully processed.

A separate condition handles the input 0. Finally, a loop checks the frequency array and displays only the digits that occur in the number.

## 6. Result

The program was implemented and executed successfully to calculate and display the frequency of each digit in the given number.
