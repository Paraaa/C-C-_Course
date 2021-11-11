#include <iostream>
#include <cmath>

using namespace std;

double deg2rad(const double);
double sine(const double x);
double cosine(const double x);

//Lecture page 44
double m_pi = 3.14159265358979323846;

int main(){
    double x;
    cout << "Enter the variable x in degree (0 - 360): ";
    cin >> x;

    double x_inRad = deg2rad(x);
    
    cout.precision(8);
    
    //our results of our Implementation of sine and cosine
    cout <<"Sine of x = "<< x << " degrees is " << sine(x_inRad) << endl;
    cout <<"Cosine of x = "<< x << " degrees is " << cosine(x_inRad) << endl;

    //the results out of the math lib
    cout <<"\nthe functions from cmath: " << endl;
    cout <<"Sine of x = "<< x << " degrees is " << sin(x_inRad) << endl;
    cout <<"Cosine of x = "<< x << " degrees is " << cos(x_inRad) << endl;
}

double deg2rad(const double y){
    return (y * m_pi) / 180;
}

//our Implementation of sine
double sine(const double x) {
    return x-(pow(x,3)/6)+(pow(x,5)/120)-(pow(x,7)/5040)+(pow(x,9)/362880)-(pow(x,11)/39916800);
}

//our Implementation of cosine
double cosine(const double x) {
    return 1-(pow(x,2)/2)+(pow(x,4)/24)-(pow(x,6)/720)+(pow(x,8)/40320)-(pow(x,10)/3628800);
}