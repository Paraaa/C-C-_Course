#include <iostream>
#include <random>
#include "classComplex.h"

using namespace std;

int main() {
    int x = 500;
    int y = 500; 
    /**
     * Based on:
     * https://stackoverflow.com/questions/13445688/how-to-generate-a-random-number-in-c
     */
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> distr(-1,1);

    Complex z;
    Complex z_new;
    Complex c = Complex(-0.4,0.6);

    for(int i = 0; i < x; i++){
        z.setReal(distr(gen));
        for(int j = 0; j< y; j++){
            z.setImag(distr(gen));
            z_new = (z*z) + c.real() + c.imag();
            z_new.print();
        }
    }

}