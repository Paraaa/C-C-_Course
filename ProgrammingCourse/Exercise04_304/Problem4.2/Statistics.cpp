#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

double mean(double arr[], int);
double stddev(double arr[], int, double);

int main(int argc, char *argv[]){
    int num_val = argc - 1;
    double *nums = new double[num_val];

    for(int i = 1; i <= num_val; i++){
        nums[i-1] = atof(argv[i]);
    }

    double m = mean(nums, num_val);
    cout << "The mean is: " << m << endl;
    double stdv = stddev(nums, num_val, m);
    cout << "The stddev is: " << stdv << endl;
}

double mean(double arr[] , int N){
    double sum = 0.0;
    for(int i = 0; i < N; i++){
        sum += arr[i];
    }
    return sum/N;
}

double stddev(double arr[] , int N, double m){
    double sum = 0.0;
    for(int i = 0; i < N; i++){
        sum += (arr[i] - m) * (arr[i] - m); 
    }
    double s = sqrt(sum / (N - 1));
    return s;
}
