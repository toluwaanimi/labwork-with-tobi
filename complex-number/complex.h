//
// Created by Emmanuel Adebayo on 10/12/2022.
//

#ifndef COMPLEX_NUMBER_COMPLEX_H
#define COMPLEX_NUMBER_COMPLEX_H
#include <string>

using namespace  std;
struct Complex {
    int re, im;
};

string toString(Complex c);

double magnitude(Complex c);

Complex conjugate(Complex c);

Complex add(Complex c, Complex res);

Complex subtract(Complex c,Complex res);

Complex multiply(Complex c,Complex res);

Complex divide(Complex c,Complex res);
#endif //COMPLEX_NUMBER_COMPLEX_H
