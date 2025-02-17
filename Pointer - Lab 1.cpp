// Author: Stacy Saucedo
// Date: 2/10/25
// Lab - Pointers Lab 1
// Purpose: Introduction demonstration of using pointers

#include <iostream>
using namespace std;

int main() {

    /*
     Section 1 Activities
     */
    cout << "Section 1" << endl;
    // Step 1: Declare and initialize integer variable
    int number = 10;

    // Step 2: Declare pointer and initialize it with the address of number
    int* ptrNumber = nullptr;
    ptrNumber = &number;
    // Step 3: Print the value of number using the variable and the pointer    
    cout << number << endl;
    cout << *ptrNumber << endl;
    // Step 4: Modify the value of number to 20 using the pointer
    *ptrNumber = 20;
    // Step 5: Print the modified value of number using the variable and the pointer
    cout << endl;
    cout << number << endl;
    cout << *ptrNumber << endl;
    /*
     Section 2 Activities
     */
    cout << "Section 2" << endl;
    // Step 1: Dynamically allocate memory for an integer

    // Step 2: Assign the value 30 to the allocated memory

    // Step 3: Print the value stored in the dynamically allocated memory

    // Step 4: Deallocate the memory and set the pointer to nullptr    

    // Step 5: Print a message confirming the memory deallocation

    cout << endl;

    /*
     Section 3 Activities
     */
    cout << "Section 3" << endl;
    // Step 1: Dynamically allocate memory for an array of 5 integers

    // Step 2: Assign values to the array elements    

    // Step 3: Print the values of the array elements using the pointer
    cout << "Array values: ";

    cout << endl;
    // Step 4: Deallocate the memory and set the pointer to nullptr    

    // Step 5: Print a message confirming the memory deallocation

    return 0;
}
