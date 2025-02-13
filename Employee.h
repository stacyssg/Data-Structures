//Stacy Saucedo
//2/10/25
//Programming 3 
//Input Employee Information from user for one instance of the Employee

#pragma once
#include <string>

using namespace std;

class Employee
{
	//class attributes
private:
	string firstName, lastName;
	int idNumber;
	string department, position;

public: //getter and setters declared
	string getFirstName() const;
	string getLastName() const;
	string getDepartment() const;
	string getPosition() const;
	int getIdNumber() const;

	void setFirstName(string pFirst);
	void setLastName(string pLast);
	void setIdNumber(int pIdNum);
	void setDepartment(string pDep);
	void setPosition(string pPos);

	//constructor
	Employee(string pFirst, string pLast, string pPos, string pDep, int pIdNum);
	Employee(); //default

	void displayEmployee() const;
};
