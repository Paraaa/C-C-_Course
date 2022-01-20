/********************************************************************************
 *
 * Random.h: header file for Rnd.cpp 
 *
 * Copyright (C) December 2016              Stefan Harfst (University Oldenburg)
 * This program is made freely available with the understanding that every copy
 * of this file must include this header and that it comes WITHOUT ANY WARRANTY.
 ********************************************************************************/
#ifndef _RND_H_
#define _RND_H_
#include <iostream>
#include <cstdlib>

using namespace std;

// function returns a random number in range [0..1]
double drand();

// function to set the seed
void setSeed(unsigned int);
#endif
