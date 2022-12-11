//
// Created by Emmanuel Adebayo on 11/12/2022.
//

#ifndef CLASS7_OPP_COMPLEX_H
#define CLASS7_OPP_COMPLEX_H
#include <string>
using namespace std;

class Complex{
public:
    int re, im;
public:Complex(int re, int  im);

public:string toString();

public:Complex conjugate();

public:void setIm(int im);

public:void setRe(int  re);

public:double magnitude();

public:Complex add(Complex complex);
public:Complex subtract(Complex complex);
public:Complex multiply(Complex complex);

public:Complex divide(Complex complex);
};
#endif //CLASS7_OPP_COMPLEX_H
