#include <iostream>

using namespace std;

double deg2rad(const double);
double sine(const double);
double cosine(const double);


int main(){

}

double deg2rad(const double x){
    //TODO: implement this.
    return 0;
}



double sine(const double x){
    return x - (x*x*x)/3 
            + (x*x*x*x*x)/120 
            - (x*x*x*x*x*x*x)/5040 
            + (x*x*x*x*x*x*x*x*x)/362880
            - (x*x*x*x*x*x*x*x*x*x*x) / 39916800 ;
}

double cosine(const double x){
    return 1 - (x*x)/2 
             + (x*x*x*x)/24
             - (x*x*x*x*x*x)/720
             + (x*x*x*x*x*x*x*x)/40320
             - (x*x*x*x*x*x*x*x*x*x)/3628800; 
}

