/// @file lab8.cpp
/// @author Abdulahi Ali 
/// @brief This program demonstrates stack vs heap memory and the use of pointers and references. 

#include <iostream>
using namespace std;


/// @brief Entry point for the memory demo 
@return 0 on sucess 

int main() {
    int stackInt = 10;
    int* heapInt = new int(20);
    int *ptrToStack = &stackInt;
    int &refToStack = stackInt;

    cout << "Stack Variable (stackInt): " << stackInt << endl; 
    cout << " Value: " stackInt << endl; 
    cout << " Adress: " << &stackInt << endl;
    cout << endl;   

    cout << "Heap Variable (heapInt): " << *heapInt << endl;
    cout << " Value: " << *heapInt << endl;
    cout << " Adress: " << heapInt << endl;
    cout << endl;

    cout << "Pointer to Stack Variable (ptrToStack): " << *ptrToStack << endl;
    cout << " Value: " << *ptrToStack << endl;
    cout << " Adress: " << ptrToStack << endl;
    cout << endl;

    cout << "Reference to Stack Variable (refToStack): " << refToStack << endl;
    cout << " Adress: " << &refToStack << endl;
    cout << endl;

    delete heapInt; // Don't forget to free the allocated memory
    return 0;

}
