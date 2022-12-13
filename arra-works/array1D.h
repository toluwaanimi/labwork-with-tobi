//
// Created by Emmanuel Adebayo on 12/12/2022.
//
using namespace std;
#ifndef ARRA_WORKS_ARRAY1D_H
#define ARRA_WORKS_ARRAY1D_H

int* allocate1DArray(int length);

int* allocate1DArray(int length, int values[]);

int* allocate1DArray(int length, int min, int max);


int* allocate1DArray(string filename);

void deallocate1DArray(int* array);

int* add(int x[], int y[]);

int* subtract(int x[], int y[]);

int* divide(int x[], int y[]);

int* multiply(int x[], int y[]);

#endif //ARRA_WORKS_ARRAY1D_H
