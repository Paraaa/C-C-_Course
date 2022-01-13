/********************************************************************************
 *
 * Rnd.cpp: a program to generate a list of random numbers 
 *
 * Copyright (C) December 2016              Stefan Harfst (University Oldenburg)
 * This program is made freely available with the understanding that every copy
 * of this file must include this header and that it comes WITHOUT ANY WARRANTY.
 ********************************************************************************/
#include <iostream>
#include <cstdlib>

using namespace std;

// function returns a random number in range [0..1]
double drand() {
   return double(rand())/RAND_MAX;
}

// function to set the seed
void setSeed(unsigned int s) {
   srand(s);
}
