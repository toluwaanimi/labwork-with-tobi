//
// Created by Emmanuel Adebayo on 10/12/2022.
//

#include <string>
#include <iostream>
#include<cmath>
#include "complex.h"

using namespace  std;

string toString(Complex c){
    if (c.im > 0){
        return to_string(c.re) + "+i"  + to_string(abs((c.im)));
    }
    return to_string(c.re) + "-i"  + to_string(abs((c.im)));
}


Complex conjugate(Complex c){
    Complex conj;
    conj.re = c.re;
    conj.im = -1 *c.im;
    return conj;
}

double magnitude(Complex c){
    return sqrt(pow(c.im,2) + pow(c.re, 2));
}

Complex add(Complex c, Complex res){
    Complex result; // result object of complex class

    // adding real part of complex numbers
    result.re = c.re + res.re;

    // adding Imaginary part of complex numbers
    result.im = c.im + res.im;

    // returning the sum
    return result;
}

Complex subtract(Complex c,Complex res){
    Complex result; // result object of complex class

    // adding real part of complex numbers
    result.re = c.re - res.re;

    // adding Imaginary part of complex numbers
    result.im = c.im - res.im;

    // returning the subtraction
    return result;
}

Complex multiply(Complex c,Complex res){
    Complex result; // result object of complex class

    // adding real part of complex numbers
    result.re = (c.re * res.re) - (c.im * res.im);

    // adding Imaginary part of complex numbers
    result.im = (c.re * res.im) + (c.im * c.re);

    // returning the multiplication
    return result;
}


Complex divide(Complex c,Complex res){
    Complex result; // result object of complex class
    // adding real part of complex numbers
    result.re=(((result.re)*(res.re))+((result.im)*(res.im)))/(pow(res.re,2)+pow(res.im,2));
    // adding Imaginary part of complex numbers
    result.im=(((res.re)*(c.im))-((c.im)*(res.im)))/(pow(res.re,2)+pow(res.im,2));

    // returning the division
    return result;
}