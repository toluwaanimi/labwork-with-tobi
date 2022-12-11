//
// Created by Emmanuel Adebayo on 11/12/2022.
//
#include "complex.h"
#include<cmath>

// this.x = x;
// this.y = y;
// setting the default value of x and y, when the object of the class is referenced.
Complex::Complex(int re, int im) {
    this->re = re;
    this->im = im;
}

string Complex::toString() {
    if (this->im > 0){
        return to_string(this->re) + "+i"  + to_string(abs((this->im)));
    }
    return to_string(this->re) + "-i"  + to_string(abs((this->im)));
}

Complex Complex::conjugate() {
    Complex conj(this->re, -1 * this->im);
    return conj;
}


void Complex::setIm(int im) {
    this->im = im;
}

void Complex::setRe(int re) {
    this->re = re;
}

double Complex::magnitude() {
    return sqrt(pow(this->im, 2) + pow(this->re, 2));
}

Complex Complex::add(Complex complex) {
    Complex result(this->re + complex.re, this->im + complex.im); // result object of complex class

    return result;
}

Complex Complex::subtract(Complex complex) {
    Complex result(this->re - complex.re, this->im - complex.im); // result object of complex class

    return result;
}

Complex Complex::multiply(Complex complex) {
    Complex result((this->re * complex.re) - (this->im * complex.im),
                   (this->re * complex.im) + (this->im * complex.re)); // result object of complex class

    return result;
}

Complex Complex::divide(Complex complex) {
    Complex result(
            (((this->re) * (complex.re)) + ((result.im) * (complex.im))) / (pow(complex.re, 2) + pow(complex.im, 2)),
            (((complex.re) * (this->im)) - ((this->im) * (complex.im))) /
            (pow(complex.re, 2) + pow(complex.im, 2))); // result object of complex class

    return result;
}

