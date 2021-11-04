#include <iostream>
#include <cmath>

using namespace std; 


//Lecture page 44
double m_pi = 3.14159265358979323846;
double f(double);

int main(){
    //declare variables
    double x_min, x_max, num_steps;
    double x; 

    //read input
    cout <<"Please enter a value for x_min: ";
    cin >> x_min;
    cout <<"Please enter a value for x_max: ";
    cin >> x_max;
    cout <<"Please enter a value for num_steps: ";
    cin >> num_steps;


    double delta = (x_max - x_min) / (num_steps - 1);

    //calculate solution
    for(int i = 0; i < num_steps; i++){ 
        if(i != 0){
            x = x_min + delta;
            x_min = x;
            cout << x << "\t" << f(x) << "\n";   
        } else {
            cout << x_min << "\t" << f(x) << "\n";
        }
    } 
}   

//function to calculate the given expression
double f(double x) {
        return  sin((3*m_pi*x)/2) * exp(-(x*x)/2);
}