/********************************************************************************
 *
 * description: header file for Sorting.h
 *
 * Copyright (C) January 2015               Stefan Harfst (University Oldenburg)
 * This program is made freely available with the understanding that every copy
 * of this file must include this header and that it comes WITHOUT ANY WARRANTY.
 ********************************************************************************/
#ifndef _SORTING_H_
#define _SORTING_H_

// *** function swaps the values of two variables
void swap(double&, double&);
void swap(int&, int&);

// *** function for quicksort (qsort)
int select_pivot(double[], const int);
int partition(double[], const int, const int);
void qsort(double[], const int);

// *** function for insertion sort (isort)
void isort(double[], const int); 

// This is another pointless comment. 


#endif
