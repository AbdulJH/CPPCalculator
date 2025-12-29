#include <iostream>
#include "calculation.h"


// Want to design a calculator 
// Will have a class that handles logic, add, subtract, divide, multiply
// User will pick two numbers and we will apply the logic in main


void printResult(double numOne, char op, double numTwo, double result)
{
    std::cout << numOne << ' ' << op << ' ' << numTwo << " = " << result;
}

int main()
{
    std::cout << "Enter your first number: ";
    double userFirstNum{};
    std::cin >> userFirstNum;

    std::cout << "Choose your operand (+ , - , * , /): ";
    char userOp{};
    std::cin >> userOp;

    std::cout << "Enter your second number: ";
    double userSecondNum{};
    std::cin >> userSecondNum;

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


    return 0;
}

