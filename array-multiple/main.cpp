#include <iostream>
#include <vector>

using namespace std;

// Function that takes in a vector of integers and checks if the length is 3
bool checkLengthThree(vector<int> arr) {
    return arr.size() == 3;
}


bool checkIfArrayIsDivisibleByThree(vector<int> arr){
    if(arr.size() % 3 != 0){
        return false;
    }
    return true;
}

// Function that takes in a vector of integers and checks if the elements at each index are divisible by 3
bool checkDivisibleByThree(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 3 != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // Ask the user for the length of the array
    cout << "Enter the length of the array: ";
    int length;
    cin >> length;

    // Create a dynamic array of integers using a vector
    vector<int> arr(length);

    // Add some elements to the array
    for (int i = 0; i < length; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Check if the array has a length of 3
    if (checkLengthThree(arr)) {
        cout << "The array has a length of 3." << endl;
    } else {
        cout << "The array does not have a length of 3." << endl;
    }

    // Check if the  array length is a multiple of 3
    if (checkIfArrayIsDivisibleByThree(arr)) {
        cout << "The array length is a multiple of 3" << endl;
    } else {
        cout << "The array length is not a multiple of 3" << endl;
    }

    return 0;
}
