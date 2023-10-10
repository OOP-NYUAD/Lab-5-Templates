/* 
Create a class DivideByZeroException to handle exception of types when dividing numerals by zero. 
Implement a Divide() function to receive two parameters (numerator and denominator). 
Make a function call and check if the denominator passed as argument is zero, 
if so throw DivideByZeroException and handle exception inside catch block to keep normal execution flow of the program.
*/

#include <iostream>
#include <stdexcept>

// Define a custom exception class for divide by zero
class DivideByZeroException : public std::exception {
public:
    // override the what() function in that class to provide a meaningful error message specific to that type of exception.
};

// implement the function to perform division
// Make sure to throw an exception if the denominator is equal to 0
double Divide(int numerator, int denominator) {
// Make sure to throw an exception if the denominator is equal to 0
    return static_cast<double>(numerator) / denominator;
}

int main() {
    //Rewrite the main function in the way that it handles the divide by 0 exception 
        int numerator, denominator;
        std::cout << "Enter the numerator: ";
        std::cin >> numerator;
        std::cout << "Enter the denominator: ";
        std::cin >> denominator;
        
        double result = Divide(numerator, denominator);
        std::cout << "Result of division: " << result << std::endl;
    

    return 0;
}
