#include <iostream>
#include <cmath>

int num_digits(const int);
void decimal2binary(const int num, int arr[], const int num_dig);
void binary2decimal(int arr[], const int size);
using namespace std;

int main() {
    int mode = NULL;

    cout << "Choose your mode: \n 1: Decimal to binary \n 2: Binary to decimal" << endl;
    cin >> mode;

    while(mode != 1 && mode != 2){
        cout << "Please enter a valid number!" << endl;
        cin >> mode;
    }

    if(mode == 1){
        int dec_num = 0;
        cout << "Please enter a number > 0: ";
        cin >> dec_num;
        int num_d = num_digits(dec_num);
        int *arr = new int[num_d];
        decimal2binary(dec_num, arr, num_d);
    } else if(mode == 2){
        string b_input = "";
        cout << "Please enter a binary number" << endl;
        cin >> b_input;
        int *b_arr = new int[b_input.length()];
        for(int i = 0; i < b_input.length(); i++){
            b_arr[i] = (b_input[i]) - 48;
        }
        binary2decimal(b_arr, b_input.length());
    }
}

int num_digits(const int num){
    return log2(num) + 1;
}

void decimal2binary(const int num, int arr[], const int num_d){
    int local_num = num;
    for(int i = num_d - 1; i >= 0; i--){
        arr[i] = local_num % 2;
        local_num = local_num / 2;
    }
    cout << "Binary:";
    for(int j = 0; j < num_d; j++){
        cout << arr[j];
    }
    cout << endl;
}

void binary2decimal(int arr[], const int size){
    int dec_num = 0;
    int exp = size - 1;
    for(int i = 0; i < size;i++){
        dec_num += pow(2,exp) * arr[i];
        exp--;
    }
    cout << "Decimal: " << dec_num << endl;
}
