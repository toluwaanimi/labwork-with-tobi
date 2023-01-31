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
    /**
     * create a string variable myText
     * create a int variable called length
     * create a file streamer object
     * check while the file has lines
     * increment the value of value by 1
     * the loop comes to an end when there's no more lines in the file.
     *
     * based on the value of length
     * create an array with the size of length "arrayValue"
     * create a variable count and set the value to 0
     * create a while loop to get the files
     * while the loop has not reached the end of the file lines
     * it set the value in the value into the array created.
     */
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
    /**
     * the function add the value in array x and y together.
     * we get the length of array x and y
     * we create another array based on the length
     * we have a for loop stating till
     * to add the values of x and y and store it into result
     * result[i] = x[i] + y[i]
     * and return result has the result of the function.
     */
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