//Stacy Saucedo
//2/10/25
//Programming 3 
//Design and implement a simple calculator using C++ classes.

#include "Calculator.h"
#include <string>
#include <iostream>

using namespace std;

//Getters
double Calculator::getFirst_Number() const
{
	return first_number;
}
double Calculator::getSecond_Number() const
{
	return second_number;
}
//Setters
void Calculator::setFirst_Number(double pFirst)
{
	first_number = pFirst;
}
void Calculator::setSecond_Number(double pSecond)
{
	second_number = pSecond;
}

//Constructors
Calculator::Calculator(double pFirst, double pSecond)
{
	first_number = pFirst;
	second_number = pSecond;
}
Calculator::Calculator()
{
	first_number = 0.0;
	second_number = 0.0;
}

//functions
double Calculator::Add()
{
	return first_number + second_number;
}
double Calculator::Subtract()
{
	return first_number - second_number;
}
double Calculator::Divide()
{
	if (second_number != 0) {
		return first_number / second_number;
	}
	else
	{
		cout << "Error, Divided by zero" << endl;
	}
}
double Calculator::Multiply()
{
	return first_number * second_number;
}
void Calculator::Print()
{
	cout << "First Number: " << first_number << endl;
	cout << "Second Number: " << second_number << endl;
}