#include <iostream>
#include <cmath>

using namespace std;

double deg2rad(const double);
double sine(const double x);
double cosine(const double x);

//Lecture page 44
double m_pi = 3.14159265358979323846;

int main(){
    char inputChar = 'a';
    double x = 0.0;
    double x_inRad = 0.0;
    
    cout << "Do you want to enter degree [d] or radians [r]: ";
    cin >> inputChar;

    while(inputChar !='d' && inputChar != 'r'){
        
        cout << "Please enter a single char [d, r]: ";
        cin >> inputChar;
    }

    //cout.precision(8); 

    if(inputChar =='d'){
        cout << "Enter the variable x in degree (0 - 360): ";
        cin >> x;
        x_inRad = deg2rad(x);

        //our results of our Implementation of sine and cosine
        cout <<"Sine of x = "<< x << " degrees is " << sine(x_inRad) << endl;
        cout <<"Cosine of x = "<< x << " degrees is " << cosine(x_inRad) << endl;

    }else {
        cout << "Enter the variable x in radians (0 - 2*pi): ";
        cin >> x_inRad;
        cout <<"Sine of your radians x = "<< x_inRad << " is " << sine(x_inRad) << endl;
        cout <<"Cosine of your radians x = "<< x_inRad << " is " << cosine(x_inRad) << endl;
    }
}

double deg2rad(const double y){
    return y * m_pi / 180;
}

//our Implementation of sine
double sine(const double x) {
    return x-(pow(x,3)/6)+(pow(x,5)/120)-(pow(x,7)/5040)+(pow(x,9)/362880)-(pow(x,11)/39916800);
}

//our Implementation of cosine
double cosine(const double x) {
    return 1-(pow(x,2)/2)+(pow(x,4)/24)-(pow(x,6)/720)+(pow(x,8)/40320)-(pow(x,10)/3628800);
}