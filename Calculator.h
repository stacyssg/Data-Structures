//Stacy Saucedo
//2/10/25
//Programming 3 
//Design and implement a simple calculator using C++ classes.

#pragma once
class Calculator
{
//class attributes
private:
	double first_number;
	double second_number;

public: //declare getters and setters
	double getFirst_Number() const;
	double getSecond_Number() const;

	void setFirst_Number(double pFirst);
	void setSecond_Number(double pSecond);

	//Constructors
	Calculator(double pFirst, double pSecond);
	Calculator();

	//function
	void Print();

	double Add();
	double Subtract();
	double Divide();
	double Multiply();
};

