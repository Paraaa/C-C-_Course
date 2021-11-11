#include <iostream>

using namespace std;

int countDivisors(int a);
void smallestTriangular();

int main(){
    int a = 0;

    cout << "Please enter your favorite number: ";
    cin >> a;
    cout << "the amount of divisors in a = " << a << " are " << countDivisors(a) << endl;
    smallestTriangular();
}

//count all divisors
int countDivisors(int a){
    int count = 0;
    for(int i = 1; i <= a; i++){
        if(a % i == 0){
            count++;
        }
    }
    return count;
}

void smallestTriangular(){
    int counter = 1;
    int sum = 0;
    int numDivisors = 0;
    
    while(numDivisors < 150){
        sum += counter;
        numDivisors = countDivisors(sum);
        counter++;
    }
    cout << "The number: " << sum << " is the number with at least 150 divisors with: " << numDivisors << " divisors" << endl;
}