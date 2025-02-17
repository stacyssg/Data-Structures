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
    int* ptr = nullptr;
    ptr = &number;
    // Step 3: Print the value of number using the variable and the pointer    
    cout << "Variable: " << number << endl;
    cout << "Pointer: " << *ptr << endl;
    // Step 4: Modify the value of number to 20 using the pointer
    *ptr = 20;
    // Step 5: Print the modified value of number using the variable and the pointer
    cout << endl;
    cout << "Variable: " << number << endl;
    cout << "Pointer: " << * ptr << endl;
    /*
     Section 2 Activities
     */
    cout << "Section 2" << endl;
    // Step 1: Dynamically allocate memory for an integer
    int* dynPtr = new int;
    // Step 2: Assign the value 30 to the allocated memory
        *dynPtr = 10;
    // Step 3: Print the value stored in the dynamically allocated memory
    cout << *dynPtr << endl;
    // Step 4: Deallocate the memory and set the pointer to nullptr    
    delete dynPtr;
    dynPtr = nullptr;
    // Step 5: Print a message confirming the memory deallocation
    cout << "Memory has been deallocated." << endl;
    cout << endl;

    /*
     Section 3 Activities
     */
    cout << "Section 3" << endl;
    // Step 1: Dynamically allocate memory for an array of 5 integers
    int* arrayPtr = new int[5];
    // Step 2: Assign values to the array elements    
    arrayPtr[0] = 1;
    arrayPtr[1] = 2;
    arrayPtr[2] = 3;
    arrayPtr[3] = 4;
    arrayPtr[4] = 5;
    // Step 3: Print the values of the array elements using the pointer
    cout << "Array values: ";
    for (int i = 0; i < 5; ++i) {
        cout << arrayPtr[i] << " ";
    }
    cout << endl;
    // Step 4: Deallocate the memory and set the pointer to nullptr    
    delete[] arrayPtr;
    arrayPtr = nullptr;
    // Step 5: Print a message confirming the memory deallocation
    cout << "Memory has been deallocated." << endl;
    return 0;
}
