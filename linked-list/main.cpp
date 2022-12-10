#include <iostream>
#include "implementation.h"
using namespace std;


int main() {
   int lines = countNumberOfLines("result.txt");
   cout<< "The number of lines of lines in the file is: " <<  lines<< endl;

   string* names = getTheNamesInTheFile("result.txt");

   printNamesInTheArray(names, lines);

   string* sortReturn = bubbleSort(names);
   printNamesInTheArray(sortReturn, lines);

   string fileName;

   cout << "Enter the desired file name you want to save the names into: "<< endl;
   cin >> fileName;
   storeSortedNamesToFile(sortReturn, fileName);
   cout << "File saved successfully"<< endl;
   return 0;
}
