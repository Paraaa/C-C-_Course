#include <iostream>

using namespace std;

int main() {

    //Lecture page 44
    const double m_pi = 3.14159265358979323846;

    float radius;

    //Gather user input
    cout << "Please enter a value for radius: ";
    cin >> radius; 

    /*
     * Calculate volume and surface area based on the radius
     * Here we don't use the pow(b,e) function due to performance
     */
    float volume = (4  * m_pi * (radius*radius*radius))/ 3;
    float surface_area = 4 * m_pi * (radius*radius);

    /*
     * Set the precision of the output to four digits
     */
    cout.precision(4);
    
    //Show the user the calculated output
    cout << "The sphere with radius " << radius << " has a volume of " << volume << " and a surface area of " << surface_area << "\n";

    return 0;
}