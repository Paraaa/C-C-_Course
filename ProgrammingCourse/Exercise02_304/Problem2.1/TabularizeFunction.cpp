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

    /*read input
      cerr is used due to the second task
      swap cerr->cout to use the same std output stream.
    */
    cerr <<"Please enter a value for x_min: " << endl;
    cin >> x_min;
    cerr <<"Please enter a value for x_max: " << endl;
    cin >> x_max;
    cerr <<"Please enter a value for num_steps: " << endl;
    cin >> num_steps;
 

    const double delta = (x_max - x_min) / double(num_steps - 1);

    //calculate solution
    for(int i = 0; i < num_steps; i++){ 
        x = x_min + double(i) * delta;
        x_min = x;
        cout << x << "\t" << f(x) << "\n";   
        cout << x_min << "\t" << f(x) << "\n";
    } 
}   

//function to calculate the given expression
double f(double x) {
        return  sin((3*m_pi*x)/2) * exp(-(x*x)/2);
}