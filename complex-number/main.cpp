#include "complex.h"
#include <iostream>
using namespace std;

int main() {
    Complex c;
    c.re = 5;
    c.im = 2;

    cout << toString(c) << "\n";
    Complex res = conjugate(c);
    cout << toString(res) << "\n";

    c.im = -2;
    cout << toString(c) << "\n";

    res = conjugate(c);
    cout << "Res: " << toString(res) << "\n";

    c.re = 3;
    c.im = 4;
    cout << "C: " << toString(c) << "\n";
    cout << magnitude(c) << "\n";

    cout << "c+res:" << toString(add(c, res)) << "\n";
    cout << "c-res:" << toString(subtract(c, res)) << "\n";
    cout << "c*res:" << toString(multiply(c, res)) << "\n";
    cout << "c/res:" << toString(divide(c, res)) << "\n";

    return 0;
}