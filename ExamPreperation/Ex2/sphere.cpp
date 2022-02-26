#include <iostream> 

using namespace std;

double pi = 3.14159265;

int main(){
    double r = 0;
    cout << "Please enter a value for the radius: " << endl;
    cin >> r;

    double volume = (4 * pi * (r * r * r)/3);
    double surface_area = 4 * pi * (r * r); 

    cout.precision(4);
    cout << "The Shere with radius " << r << 
            " has a volume of " << volume << " and a surface area of " 
            << surface_area << "." << endl; 
}