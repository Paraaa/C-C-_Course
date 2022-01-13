/********************************************************************************
 *
 * description: sorts a given number of values using Quicksort or Insertionsort
 *
 * Copyright (C) October 2014               Stefan Harfst (University Oldenburg)
 * This program is made freely available with the understanding that every copy
 * of this file must include this header and that it comes without any WITHOUT
 * ANY WARRANTY.
 ********************************************************************************/
#include "Sorting.h"

using namespace std;

// *** function swaps the values of two variables
void swap(double &a, double &b) {
  double tmp=a;
  a=b;
  b=tmp;
  return;
}

// *** function swaps the values of two variables
void swap(int &a, int &b) {
  int tmp=a;
  a=b;
  b=tmp;
  return;
}

// *** function returns the index of a pivot element (used in qsort)
int select_pivot(double a[], const int n)
{
  int l=0, m=n/2, r=n-1;
  if (a[m]<a[l]) swap(l, m); // now a[l]<a[m]
  if (a[r]<a[l]) swap(l, r); // now a[l] smallest
  if (a[m]<a[r])
	return m;
  else
	return r;
}

// *** function returns index ip with a[] divided in two sublists
// ***          with a[i<ip]<=a[ip] and a[i>ip]>a[ip] (used by qsort)
int partition(double a[], const int n, const int ip)
{
  // swap pivot element ip to end of list
  swap(a[ip], a[n-1]);
  double pvalue=a[n-1];

  // find elements for swapping
  int i=0;
  int j=n-2;
  while (i<j)
  {
    // from left find element bigger or equal than pivot
    while(a[i]<=pvalue && i<j) ++i;
    // from right find element smaller than pivot
    while(a[j]>pvalue && j>i) --j;
    if (i<j) swap(a[i], a[j]);
  }
  swap(a[j],a[n-1]);
  return j;
}

// *** function sorts the values in a[] using quicksort
void qsort(double a[], const int n)
{
  // termination conditions
  if (n<=1) return;
  if (n==2)
    if (a[1]<a[0]) {
      swap(a[0], a[1]);
      return;
    }

  // get the pivot element and partition a[]
  int pivot_index = select_pivot(a, n);
  pivot_index = partition(a, n, pivot_index);
 
  // recursively sort the two sublists in a
  // (note the use of references here)
  int nleft  = pivot_index;
  int nright = n-1-pivot_index;
  qsort(&a[0], nleft);
  qsort(&a[pivot_index+1], nright);
  
  // done
  return;
}

// *** function sorts values in a[] using insertion sort
void isort(double a[], const int n) {
  // for all elements in a[] except the first
  for (int i=1; i<n; ++i) {
    double tmp=a[i];  // element to insert
    int j=i;
    while (a[j-1]>tmp && j>0) { // repeat until index for inserion is found
      a[j] = a[j-1];            // move element in sorted list up by one
      --j;
    }
    a[j] = tmp;                 // insert current element 
  }
  return;
}

