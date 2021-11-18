#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]){
    int num_val = argc - 1;
    double *nums = new double[num_val];

    for(int i = 1; i <= num_val; i++){
        cout << argv[i] << endl;
        nums[i-1] = atof(argv[i]);
    }
 
    for(int i = 0; i < num_val; i++){
        cout << nums[i] << endl;
    }
}

double mean(double arr)
