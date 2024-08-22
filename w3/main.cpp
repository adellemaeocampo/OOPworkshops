#include <iostream>
#include "workshop.h"

using namespace std;

int main() {
    double a = 2.5;
    char b = 'A';
    double c[] = {1,2,3,4,5};

    double* ptrd = &a;
    char* ptrc = &b; 

    int size = 8;
    double* arrayabc = dynamicArray(size);

    cout << "double pointer: "<< *ptrd << endl; 
    cout << "char pointer: "<< *ptrc << endl; 

    changeValue(ptrd);
    cout << "the changed double " << *ptrd << endl;

    double maxA = arrayMax(c, 5);

    cout << "for array: ";
    printArray(c, 5);
    cout << "the max val is: "<< maxA << endl;

    for (int i=0; i<size; i++) {
        cout << "dynamoc array: " << *arrayabc << endl;
    }
    
    delete [] arrayabc;
    return 0;
}