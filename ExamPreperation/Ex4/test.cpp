
#include <iostream>
#include <iomanip>

using namespace std;

template <typename T>
T sign(const T value) {
    T result = 0;
    if(value > 0){
       result = 1;
    } else if(value < 0) {
       result = -1;
    }
    return result;
}


int main(){
    cout << fixed << setprecision(1);
    cout << "sign(-8)   = " << sign(-8) << endl;
    cout << "sign(42)   = " << sign(42) << endl;
    cout << "sign(3.14)   = " << sign(3.14) << endl;
    cout << "sign(0.0)   = " << sign(0.0) << endl;
    return 0;
}