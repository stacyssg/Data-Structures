//Stacy Saucedo
//2/10/25
//Programming 3 
//Input Employee Information from user for one instance of the Employee

#include "Employee.h"
#include <iostream>
using namespace std;


int main()
{
	string pFirst, pLast, pPos, pDep;
	int pIdNum;
	//User input
	cout << "***Employee Information***\n";
	cout << "Enter Employee First Name: ";
	getline(cin, pFirst);

	cout << "Enter Employee Last Name: ";
	getline(cin, pLast);

	cout << "Enter Employee ID Number: ";
	cin >> pIdNum;

	cin.ignore();

	cout << "Enter Employee Department: ";
	getline(cin, pDep);

	cout << "Enter Employee Position: ";
	getline(cin, pPos);

	//Employee obj
	Employee myEmp(pFirst, pLast, pPos, pDep, pIdNum);
	
	myEmp.displayEmployee(); //Print

	return 0;
}