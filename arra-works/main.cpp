#include <iostream>
#include "array1D.h"

using namespace std;

int main() {
    int ar[] = {1,2, 3};
    allocate1DArray(5);
  int* arr =  allocate1DArray(3, ar);
      allocate1DArray(3, 2,300);

    deallocate1DArray(arr);
    return 0;
}
