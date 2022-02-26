/********************************************************************************
 *
 * description: a program with a simple class of 3d vectors
 *
 * Copyright (C) December 2016             Stefan Harfst (University Oldenburg)
 * This program is made freely available with the understanding that every copy
 * of this file must include this header and that it comes WITHOUT ANY WARRANTY.
 ********************************************************************************/
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

// definition of a simple 3d vector class
class Vector3d {

   private:
      int vect[3];

   public:
      // default constructor to initialize sero vector
      Vector3d() {
         for (int i=0; i<3; i++) 
            vect[i] = 0;
      }

      // offset operator for accessing vector elements
      int& operator[](const int i) {
         try {
            if((i >= 3) || (i<0)) {
               string error = "Error: out of bounds!";
               throw error;
            }
         } catch (const string e) {
            cout << e << endl;
            exit(1);
         }
         return vect[i];
      }

      // make overloaded stream operator a friend of class
      friend ostream& operator<< (ostream& out, const Vector3d x);
};

// stream operator<< for printing vectors
ostream& operator<< (ostream& out, const Vector3d x) {
   out << x.vect[0];
   for (int i=1; i<3; i++) {
      out << " " << x.vect[i];
   }
   return out;
}

// main program
int main() {

   // define vector a and b
   Vector3d a, b;

   // set values of a
   a[0] = 4;
   a[1] = 8;
   a[2] = 15;

   // set values of b
   b[0] = 16;
   b[1] = 23;
   b[2] = 42;

   a[4] = 21;   // oops


   // print vectord
   cout << " a = ( " << a << " )" << endl;  
   cout << " b = ( " << b << " )" << endl;  
}
