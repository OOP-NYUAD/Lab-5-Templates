# Lab-5-Templates: Error Handling in C++

This lab demonstrates error handling using custom exceptions. In this exercise, we define a custom exception class `DivideByZeroException` to handle exceptions when dividing numerals by zero. We implement a `Divide()` function to receive two parameters (numerator and denominator), make a function call, check if the denominator passed as an argument is zero, and throw a `DivideByZeroException` when necessary. We also include a catch block to handle the exception and another catch block to catch all types of exceptions.

## Instructions

1. Compile the source code provided in the `lab5exercise.cpp` file using the GitHub Classrooms codespace provided. You can use a command like the following to compile the code:

   ```
   g++ lab5exercise1.cpp -o error_handling
   ```

2. Run the compiled executable:

   ```
   ./error_handling
   ```

3. Follow the prompts to enter the numerator and denominator.

4. Observe the program's behavior when you enter different values for the numerator and denominator:
   - If you enter a non-zero denominator, the program will perform the division and display the result.
   - If you enter a denominator of zero, the program will throw a `DivideByZeroException` and handle the exception in the catch block.

## Custom Exception Class

- `DivideByZeroException`: This class is derived from `std::exception` and is used to handle exceptions when division by zero occurs. It provides a custom error message.

## Error Handling

- The `Divide()` function checks if the denominator is zero and throws a `DivideByZeroException` when necessary.
- The `main` function includes catch blocks to handle the `DivideByZeroException` and other exceptions.
Certainly! Here's a section in the `README.md` file with a sample input and output:


## Sample Input and Output

Below is a sample input and output.

```
Enter the numerator: 10
Enter the denominator: 2
Result of division: 5

Enter the numerator: 7
Enter the denominator: 0
Exception caught: Division by zero exception
```

In the first example, the user enters a numerator of `10` and a denominator of `2`. The program performs the division and displays the result (`5`).

In the second example, the user enters a numerator of `7` and a denominator of `0`. This causes a `DivideByZeroException` to be thrown, and the program catches the exception, displaying the custom error message.
