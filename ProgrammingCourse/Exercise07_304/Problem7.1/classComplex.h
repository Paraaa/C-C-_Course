#include <iostream>
#include <cmath>

using namespace std;

class Complex{

    private: 
        double re;
        double im;

    public:
        Complex(void){
            re = 0;
            im = 0;
        }
        Complex(const double r){
            re = r;
            im = 0;
        }
        Complex(const double r,const double i){
            re = r;
            im = i; 
        }
         
        void setReal(double re){
            re = re;
        }
        void setImag(double im){
            im = im; 
        }
        double real(){
            return re;
        }
        double imag(){
            return im;
        }

        
        Complex operator+(const Complex& r){
            double re = re + r.re;
            double im = im + r.im;
            return Complex(re, im);
        }
        Complex operator-(const Complex& r){
            double re = re - r.re;
            double im = im - r.im;
            return Complex(re, im);
        }
        Complex operator*(const Complex& r){
            double re = (re * r.re - im * r.im);
            double im = (im * r.re - r.im *  re);
            return Complex(re,im);
        }
        Complex operator/(const Complex& r){
            double den = (r.re*r.re) + (r.im*r.im);
            double re = ((re*r.re) + (im*r.im)) / den;
            double im = ((im*r.im) - (re*r.im)) / den;
            return Complex(re, im);
        }

};