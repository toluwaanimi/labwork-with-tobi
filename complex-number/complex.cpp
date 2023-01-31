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
    /**
     * The algorithm involved in this function would be
     *
     * 1. Create a function toString with Parameter Complex c
     * 2. Check if c.im is greater than 0
     * 3. If the condition is true, return c.re + "+1"+ absolute value of c.im
     * 4. If not true return c.re + "-i absolute value of c.im
     *
     */
}


Complex conjugate(Complex c){
    Complex conj;
    conj.re = c.re;
    conj.im = -1 *c.im;
    return conj;
    /**
     * this function is to return the conjugate
     * It accept a value Complex c
     * A variable conj is created
     * The value of conj is set to
     * conj.re = c.re
     * conj.im = -1. * c.im
     * and the value of conj is  returned.
     */
}

double magnitude(Complex c){
    return sqrt(pow(c.im,2) + pow(c.re, 2));
    /**
     * function magnitude
     * I created the function to accept Complex c has argument.
     * I calculate the magnitude by returning the square root of
     * c.im power 2 added with c.re power 2
     */
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