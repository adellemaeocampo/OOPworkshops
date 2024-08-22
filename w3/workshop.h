#include <iostream>

using namespace std;

#ifndef WORKSHOP_H
#define WORKSHOP_H

    double *ptrd, a;
    char *ptrc, b;

    void changeValue(double* ptr) {
        *ptr = 42;
    }

    void printArray(double* array, int n) {
        for(int i=0; i<n; i++){
            cout << array[i] << " " << endl;
        }
    }

    double arrayMax(double* array, int n) {
        int max = array[0];

        for (int i=0; i<n; i++) {
            if (array[i] < array[i+1]) {
                max = array[i+1];
            }
        }

        return max; 
    }

    double* dynamicArray(int n) {
        double* array = new double[n];

        for(int i=0; i<n; i++) { 
            array[i] = i+1;
        }

        return array; 
    }


#endif 