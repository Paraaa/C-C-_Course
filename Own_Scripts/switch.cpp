#include <iostream>

using namespace std; 

int main(){
    int temp;
    cin >> temp;

    switch(temp) {
        case 15:
            cout<< "Medium";
            break;
        case 10:
            cout<< "Low";
            break;
        case 20:
            cout << "High";
            break;
        default:
            cout << "Undefined";
    }
}