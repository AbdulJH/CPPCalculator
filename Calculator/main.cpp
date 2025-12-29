#include <iostream>
#include <cctype>
#include "calculation.h"


// Want to design a calculator 
// Will have a class that handles logic, add, subtract, divide, multiply
// User will pick two numbers and we will apply the logic in main


void printResult(double numOne, char op, double numTwo, double result)
{
    std::cout << numOne << ' ' << op << ' ' << numTwo << " = " << result;
}


void doOperations(double userFirstNum, char userOp, double userSecondNum) 
{
    switch (userOp)
    {
    case '+':
        printResult(userFirstNum, userOp, userSecondNum, add(userFirstNum, userSecondNum));
        break;
    case '-':
        printResult(userFirstNum, userOp, userSecondNum, subtract(userFirstNum, userSecondNum));
        break;
    case '*':
        printResult(userFirstNum, userOp, userSecondNum, multiply(userFirstNum, userSecondNum));
        break;
    case '/':
        printResult(userFirstNum, userOp, userSecondNum, divide(userFirstNum, userSecondNum));
        break;
    default:
        std::cout << "ERROR!!";
        break;
    }

}

int main()
{

    bool running = true;

    while (running)
    {
        std::cout << "\n=== Calculator === \n";

        std::cout << "Enter your first number (or 'q' to quit:) ";

        std::cin >> std::ws;

        if (std::tolower(std::cin.peek()) == 'q') {
            running = false;
            break;
        }


        double userFirstNum{};
        std::cin >> userFirstNum;

        std::cout << "Choose your operand (+ , - , * , /): ";
        char userOp{};
        std::cin >> userOp;

        std::cout << "Enter your second number: ";
        double userSecondNum{};
        std::cin >> userSecondNum;

        doOperations(userFirstNum, userOp, userSecondNum);

    }

    

    std::cout << "Goodbye user!\n";

    return 0;
}

