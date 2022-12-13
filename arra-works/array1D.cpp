//
// Created by Emmanuel Adebayo on 12/12/2022.
//
#include <new>
#include <string>
#include <fstream>

using namespace std;

int* allocate1DArray(int length){
    int* arrayValue =  new int[length];
    for (int i = 0; i < length; ++i) {
        arrayValue[i] = 0;
    }
    return  arrayValue;
}


int* allocate1DArray(int length, int values[]){
    int* arrayValue =  new int[length];
    for (int i = 0; i < length; ++i) {
        arrayValue[i] = values[i];
    }
    return  arrayValue;
}

int* allocate1DArray(int length, int min, int max){
    int* arrayValue =  new int[length];
    for (int i = 0; i < length; ++i) {
        int randomValue = rand() % (max + 1 - min) + min;
        arrayValue[i] = randomValue;
    }
    return  arrayValue;
}

int* allocate1DArray(string filename){
    string myText;
    int length = 0;
    ifstream MyReadFile(filename);
    while (getline (MyReadFile, myText)) {
        length++;
    }

    int* arrayValue =  new int[length];
    int count = 0;
    while (getline (MyReadFile, myText)) {
        arrayValue[count] = atoi(myText.c_str());;
        count++;
    }
    return  arrayValue;
}

void deallocate1DArray(int* array){
    delete array;
}


int* add(int x[], int y[]){
    int lengthX = sizeof(x) / sizeof(int);
    int lengthY = sizeof(y) / sizeof(int);
    int* result = new int[lengthX];
    for (int i = 0; i < lengthY; ++i) {
        result[i] = x[i] + y[i];
    }
    return  result;
}

int* subtract(int x[], int y[]){
    int lengthX = sizeof(x) / sizeof(int);
    int lengthY = sizeof(y) / sizeof(int);
    int* result = new int[lengthX];
    for (int i = 0; i < lengthY; ++i) {
        result[i] = x[i] - y[i];
    }
    return  result;
}

int* divide(int x[], int y[]){

    int lengthX = sizeof(x) / sizeof(int);
    int lengthY = sizeof(y) / sizeof(int);
    int* result = new int[lengthX];
    for (int i = 0; i < lengthY; ++i) {
        result[i] = x[i] / y[i];
    }
    return  result;
}

int* multiply(int x[], int y[]){
    int lengthX = sizeof(x) / sizeof(int);
    int lengthY = sizeof(y) / sizeof(int);
    int* result = new int[lengthX];
    for (int i = 0; i < lengthY; ++i) {
        result[i] = x[i] * y[i];
    }
    return  result;
}