#include <iostream>

using namespace std;

int main() {


    double epsilon_double = 2E-60;
    double eps_d = 0;
    //Calculation for the positive double presision
    while(1 + epsilon_double == 1){
        eps_d = epsilon_double;
        epsilon_double = epsilon_double *2;
    }
    cout << "Smallest positive double epsilon is: " << eps_d << endl;


    epsilon_double = 2E-60;
    eps_d = 0;
    //Calculation for the negativ double presision
    while(1 - epsilon_double == 1){
        eps_d = epsilon_double;
        epsilon_double = epsilon_double *2;
    }
    cout << "Smallest negativ double epsilon is: " << eps_d << endl;


    float epsilon_float = 2E-30f;
    float eps_f = 0;
    //Calculation for the positive float presision
    while(1 + epsilon_float == 1){
        eps_f = epsilon_float;
        epsilon_float = epsilon_float * 2;
    }
    cout << "Smallest positive float epsilon is: " << eps_f << endl;


    epsilon_float = 2E-30f;
    eps_f = 0;
    //Calculation for the negative float presision
    while(1 - epsilon_float == 1){
        eps_f = epsilon_float;
        epsilon_float = epsilon_float * 2;
    }
    cout << "Smallest negativ double epsilon is: " << eps_f << endl;

 }