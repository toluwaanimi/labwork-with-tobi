//
// Created by Emmanuel Adebayo on 10/12/2022.
//
#include <iostream>
#include <iostream>
#include <iterator>
#include <fstream>

using namespace std;

int countNumberOfLines(string filename ){
    // define a variable
    string myText;
    // define variable to count the lines
    int lines = 0;

    ifstream MyReadFile(filename);
    while (getline (MyReadFile, myText)) {
        // adding the line by 1; meaning lines = lines + 1;
        lines++;
    }
    // return lines
    return lines;
}

string* getTheNamesInTheFile(string filename){
    int lines = countNumberOfLines(filename);
    string names[lines];
    string myText;

    ifstream MyReadFile(filename);
    int count = 0;
    while (getline (MyReadFile, myText)) {
        names[count] = myText;
        count++;
    }
    return  names;
}


void printNamesInTheArray(string* names, int length){
    for (int i = 0; i < length; ++i) {
        cout<< names[i]<< endl;
    }
    cout<< " " <<endl;
}

string* bubbleSort(string* names) {
    int length = sizeof(names) / sizeof(int);
    bool swapped = true;
    int j = 0;
    string temporaryMemory;
    while (swapped){
        swapped = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (names[i].compare(names[i + 1]) ){
                temporaryMemory = names[i];
                names[i] = names[i + 1];
                names[i + 1] = temporaryMemory;
                swapped = true;
            }
        }
    }
    string* newAr = names;
    return  newAr;
    /**
     * Bubble sort.
     * In first cycle,
Start by comparing 1st and 2nd element and swap if 1st element is greater.
After that do the same for 2nd and 3rd element.
At the end of cycle you will get max element at the end of list.
Now do the same in all subsequent cycles.
Perform this for (number of elements – 1) times.
You will get sorted list.
     */
}


void storeSortedNamesToFile(string* names, string filename){
    ofstream MyFile(filename);
    string value = "";
    int length = sizeof(names) / sizeof(int);
    for (int i = 0; i < length ; i++){
       value = names[i];
       MyFile << &value;
    }
}
