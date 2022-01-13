/********************************************************************************
 *
 * description: a program to print sorted random numbers
 *
 * Copyright (C) January 2015               Stefan Harfst (University Oldenburg)
 * This program is made freely available with the understanding that every copy
 * of this file must include this header and that it comes without any WITHOUT
 * ANY WARRANTY.
 ********************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Sorting.h"
#include "Rnd.h"

// *** 
int main() {
   //This is a pointless comment. 

   // define array to hold values
   double*   values=NULL;
   const int nvalues=10;
   values = new double[nvalues];

   // get random values between [0,1]
   setSeed(time(NULL));
   for (int i=0; i<nvalues; ++i) 
      values[i] = drand();

   // output unsorted values
   cout << "unsorted: ";
   for (int i=0; i<nvalues; ++i) 
      cout << values[i] << " ";
   cout << endl;

   // sorting
   isort(values, nvalues);

   // output sorted values
   cout << "sorted:   ";
   for (int i=0; i<nvalues; ++i) 
      cout << values[i] << " ";
   cout << endl;
}
