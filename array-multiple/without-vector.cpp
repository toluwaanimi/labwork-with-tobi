#include <iostream>

using namespace std;

// Function that takes in an array of integers and checks if the length is 3
bool checkLengthThree(int arr[], int size) {
    return size == 3;
}

bool checkIfArrayIsDivisibleByThree(int arr[], int size){
    if(size% 3 != 0){
        return false;
    }
    return true;
}


// Function that takes in an array of integers and checks if the elements at each index are divisible by 3
bool checkDivisibleByThree(int arr[], int size) {
    for (int i = 0; i < size; i++) {
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

    // Create an array of integers with the specified length
    int arr[length];

    // Add some elements to the array
    for (int i = 0; i < length; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Check if the array has a length of 3
    if (checkLengthThree(arr, length)) {
        cout << "The array has a length of 3." << endl;
    } else {
        cout << "The array does not have a length of 3." << endl;
    }

    // Check if the  array length is a multiple of 3
    if (checkIfArrayIsDivisibleByThree(arr, length)) {
        cout << "The array length is a multiple of 3" << endl;
    } else {
        cout << "The array length is not a multiple of 3" << endl;
    }

    // Check if the elements at each index in the array are divisible by 3
    if (checkDivisibleByThree(arr, length)) {
        cout << "All elements in the array are divisible by 3." << endl;
    } else {
        cout << "Not all elements in the array are divisible by 3." << endl;
    }

    return 0;
}
