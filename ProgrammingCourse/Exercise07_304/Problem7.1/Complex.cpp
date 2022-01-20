/********************************************************************************
 *
 * Complex.cpp: a program using the class Complex
 *
 * Copyright (C) 2014-2017               Stefan Harfst (University Oldenburg)
 * This program is made freely available with the understanding that every copy
 * of this file must include this header and that it comes without any WITHOUT
 * ANY WARRANTY.
 ********************************************************************************/
#include <iostream>
#include "classComplex.h"

using namespace std;

int main() {

  // implement constructors so that the following statements work correctly
  Complex za;                // complex zero:   za =  0 + 0i
  Complex zb(4.0, 3.0);      // complex value:  zb =  4 + 3i
  Complex zc(-16.0);         // complex value:  zc = -16 + 0i
  Complex zd(3.0,7.0);       // complex value:  zd =  3 + 7i

  // implement member functions to get the private real and imag variables
  cout << "za = " << za.real() << " + " << za.imag() << "i" << endl;
  cout << "zb = " << zb.real() << " + " << zb.imag() << "i" << endl;
  cout << "zc = " << zc.real() << " + " << zc.imag() << "i" << endl;

  // implement addition and subtraction for the next statements
  za = zb + zd;
  zb = za - zc;
  za = za + 1.0;             // this also works... why?
  cout << "za = " << za.real() << " + " << za.imag() << "i" << endl;
  cout << "zb = " << zb.real() << " + " << zb.imag() << "i" << endl;

  // implement multiplication and division for the next statements
  za = za * zb;
  zb = za / zb;
  zb = zb * 2.0;
  cout << "za = " << za.real() << " + " << za.imag() << "i" << endl;
  cout << "zb = " << zb.real() << " + " << zb.imag() << "i" << endl;

  // implement a non-member function Complex sqrt(const Complex)
  // (optional: uncomment the next two lines to test sqrt-function)
  //zc = sqrt(zc);
  //cout << "zc = " << zc.real() << " + " << zc.imag() << "i" << endl;

}
