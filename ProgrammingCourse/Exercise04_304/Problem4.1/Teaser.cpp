/********************************************************************************
 *
 * teaser.cpp: a program that does something 
 *
 * Copyright (C) October 2014               Stefan Harfst (University Oldenburg)
 * This program is made freely available with the understanding that every copy
 * of this file must include this header and that it comes without any WITHOUT
 * ANY WARRANTY.
 ********************************************************************************/
#include <iostream>
#include <cstdlib>

using namespace std;

double drand() {
   static bool first=true;
   if (first) {
      first=false;
      srand(123456);
   }
   return double(rand())/RAND_MAX;
}

int main(int argc, char *argv[]) {
   const int NVMAX=1000;
   int       num_values=0;
   double    values[NVMAX];

   // check if cmd-line argument was provided and exit with error if not
   if (argc!=2) {
      cerr << "Usage: ./Teaser <n>" << endl;
      return 1;
   }

   // convert cmd-line argumetn to int, exit with error 
   // if not 0<num_values<=1000
   num_values = atoi(argv[argc-1]);
   if (num_values<=0 || num_values>NVMAX) {
      cerr << "Argument must be integer and between 1 and " << NVMAX << endl;
      return 1;
   }

   double a=1.0, b=4.0;
   for (int i=0; i<num_values; ++i) {
      values[i] = a + (b-a)*drand(); 
   }

   for (int i=0; i<num_values; ++i) {
      cout << values[i] << endl;
   }
}
