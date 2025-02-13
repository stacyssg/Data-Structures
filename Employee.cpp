//Stacy Saucedo
//2/10/25
//Programming 3 
//Input Employee Information from user for one instance of the Employee

#include "Employee.h"
#include <string>
#include <iostream>

using namespace std;

//Getters(Assessors)	
	string Employee::getFirstName() const
	{
		return firstName;
	}
	string Employee::getLastName() const
	{
		return lastName;
	}
	string Employee::getPosition() const
	{
		return position;
	}
	string Employee::getDepartment() const
	{
		return department;
	}
	int Employee::getIdNumber() const 
	{
		return idNumber;
	}

	//Setters (Mutators)
	void Employee::setFirstName(string pFirst)
	{
		firstName = pFirst;
	}
	void Employee::setLastName(string pLast)
	{
		lastName = pLast;
	}
	void Employee::setPosition(string pPos)
	{
		position = pPos;
	}
	void Employee::setDepartment(string pDep)
	{
		department = pDep;
	}
	void Employee::setIdNumber(int pIdNum)
	{
		idNumber = pIdNum;
	}

	//Constructors
	Employee::Employee(string pFirst, string pLast, string pPos, string pDep, int pIdNum)
	{
		firstName = pFirst;
		lastName = pLast;
		position = pPos;
		department = pDep;
		idNumber = pIdNum;
	}

	Employee::Employee()
	{
		firstName = "Unknown";
		lastName = "Unknown";
		position = "Unknown";
		department = "Unknown";
		idNumber = 0;
	}

	//functions
	void Employee::displayEmployee() const
	{
		cout << endl;
		cout << "Name: " << firstName <<  " " << lastName << endl;
		cout << "ID Number: " << idNumber << endl;
		cout << "Department: " << department << endl;
		cout << "Position: " << position << endl;
	}