#include <iostream>
#include <cmath> 

using namespace std;

int main(){
    double epsilon = pow(2,-60);
    cout << "Double precision" << endl;
    for(int i = 0; i < 100; i++){
        epsilon = epsilon * 2;
        if(1+epsilon != 1){
            cout << "Index: " << i << " -> Not equal" << endl;
        } else {
            cout << "Index: " << i << " -> Is equal" << endl;
        }
    }

    
    return 0;
}