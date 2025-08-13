# Basic Calculator Project

## Overview
This is a simple C++ console program that takes a sequence of numbers and arithmetic operations as input, evaluates the expression from left to right, and outputs the final result. It supports addition, subtraction, multiplication, and division.

## Features
- Supports basic arithmetic operations: `+`, `-`, `*`, `/`
- Takes multiple numbers and operations as input
- Performs calculations sequentially (left to right)
- Displays an error message for invalid operations

## How to Run

1. Compile the program using a C++ compiler, e.g.: g++ calculator.cpp -o calculator
2. Run the compiled executable:./calculator

## Example Usage
<img width="1166" height="747" alt="image" src="https://github.com/user-attachments/assets/0d816b47-da56-4f00-8870-ae24ae719cc8" />


## Code Explanation
- The program stores input numbers in a vector.
- It stores the input operations in another vector.
- It initializes a variable `curr` with the first number.
- It iterates over each operation and applies it to `curr` and the next number.
- Supported operations are addition, subtraction, multiplication, and division.
- Prints an error message if an invalid operation is entered.

## Limitations
- No operator precedence (calculations are performed strictly left to right)
- No explicit handling of division by zero
- Assumes all inputs are valid integers

## Future Improvements
- Implement operator precedence (e.g., multiplication/division before addition/subtraction)
- Handle division by zero errors gracefully
- Support floating-point numbers as input
- Improve input validation and user experience





