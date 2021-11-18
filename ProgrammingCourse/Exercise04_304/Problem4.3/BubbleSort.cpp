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

// function to swap the value of two variables
void swap(double &a, double &b) {
   double tmp=a;
   a=b;
   b=tmp;
}

// function to sort an array a[] with n elements
// using the BubbleSort algorithm
void BubbleSort(double a[], int n) {
   for (int m=n; n>1; n--) {
      for (int i=0; i<m-1; i++)
          if (a[i]>a[i+1]) swap(a[i],a[i+1]);
   }
}

int main(int argc, char *argv[]) {
   
   // check if cmd-line argument was provided and exit with error if not
   if (argc!=2) {
      cerr << "Usage: ./BubbleSort <n>" << endl;
      return 1;
   }

   // convert cmd-line argumetn to int, exit with error if n<=0
   int n = atoi(argv[argc-1]);
   if (n<=0) {
      cerr << "Argument must be integer > 0" << endl;
      return 1;
   }

   // initialize array with n random numbers
   double *array = new double[n]; 
   for (int i=0; i<n; i++) array[i] = drand();

   // add code for timing here
   // ...
   BubbleSort(array,n);
   // ...  
}
