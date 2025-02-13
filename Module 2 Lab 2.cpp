//Stacy Saucedo
//2/10/25
//Programming 3 
//Design and implement a simple calculator using C++ classes.

#include "Calculator.h"
#include <iostream>
 using namespace std;

int main()
{
    double first, second;
    cout << "***Welcome to your Calculator Simulation***\n";
    cout << "Enter First Number: ";
    cin >> first;

    cout << "Enter Second Number: ";
    cin >> second;

    //Stored user input in calculator object 
    Calculator myCal(first, second);

    //Performing all calculations
    cout << "Addition (+): " << myCal.Add() << endl;
    cout << "Subtraction (-): " << myCal.Subtract() << endl;
    cout << "Multiplication (*): " << myCal.Multiply() << endl;
    cout << "Division (/): " << myCal.Divide() << endl;

    return 0;
}

