#include <iostream>

using namespace std;

int calcSum(int);

int f_num = 3;
int s_num = 7;
int sum = 0;

int main(){    

    int limit;
    
    cout << "Enter the limit ";
    cin >> limit;


    for(int i = 1; i < limit; i++){
        if(i % f_num == 0 || i % s_num == 0){
            cout << i << " ";
            sum += i; 
        }
    }
    cout << "\nSum of the sequence is: " << sum << endl;
    calcSum(limit);
    cout << "\nSum of the sequence with recursion: " << sum << endl;
}

int calcSum(int limit){
    int sum = 0;
    if(limit == 0){
        return 0;
    }
    if(limit % f_num == 0 || limit % s_num == 0){
        sum += limit;
        limit--;
        return calcSum(limit);
    }
    return 0;
}