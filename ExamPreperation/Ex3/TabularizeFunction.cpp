#include <iostream>
#include <cmath>

using namespace std;


double pi = 3.14159265;
double e =  2.7182818284;

int main(){
    int x_min;
    int x_max;
    int num_steps;
    double x;
    double y;

    cerr << "Declare x_min: ";
    cin >> x_min;
    cerr << "Declare x_max: ";
    cin >> x_max;
    cerr << "Declare num_steps: ";
    cin >> num_steps;
    cerr << endl;

    double delta = (x_max - x_min) /  double(num_steps - 1);

    //calculate solution
    for(int i = 0; i < num_steps; i++){ 
        x = x_min + double(i) * delta;
        y = sin(1.5*pi*x)*exp(-0.5*(x*x));
        cout << x << "\t" << y << "\n";   
    }   
}
