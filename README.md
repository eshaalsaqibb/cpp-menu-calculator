# cpp-menu-calculator
A basic C++ menu based calculator.

## Features
- Addition
- Subtraction
- Multiplication
- Division, with a check that prevents dividing by zero
- Modulus (works on whole numbers)
- Square root
- Return to menu option
- Option to run another calculation without restarting the program

## Concepts Used
- `do-while` loop to repeat calculations
- `if` statements to handle the user's menu choice
- Data types: `char` for choices, `double` for decimal numbers, `int` for modulus
- `<cmath>` library for `sqrt()`
- Input and output with `cin` and `cout`

## How to Run
1. Make sure you have a C++ compiler such as g++ installed.
2. Open a terminal in the folder containing the file.
3. Compile the program:
```
   g++ cpp-calculator.cpp -o calculator
```
4. Run it:
```
   ./calculator
```
   (On Windows, use `calculator.exe`.)

## Future Improvements
- Handle modulus when the second number is 0
- Fix the "Return to menu" option so it goes back to the menu instead of closing the program
- Show a message for invalid menu choices
- Use a `switch` statement instead of multiple `if` statements
- Move each operation into its own function
- Prevent crashes on non-numeric input
