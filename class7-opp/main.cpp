#include "complex.h"
#include <iostream>

using namespace std;

int main() {
    Complex c(5, 2);


    cout << c.toString() << endl;
    Complex res = c.conjugate();
    cout << res.toString() << "\n";

    c.setIm(-2);
    cout << c.toString() << "\n";

    res = c.conjugate();
    cout << "Res: " << res.toString() << "\n";

    c.setRe(3);
    c.setIm(4);
    cout << "C: " << c.toString() << "\n";
    cout << c.magnitude() << "\n";

    cout << "c+res:" << c.add(res).toString() << "\n";
    cout << "c-res:" << c.subtract(res).toString() << "\n";
    cout << "c*res:" << c.multiply(res).toString() << "\n";
    cout << "c/res:" << c.divide(res).toString() << "\n";

    return 0;
}