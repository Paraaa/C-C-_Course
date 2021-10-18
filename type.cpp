#include<iostream>

using namespace std;

int main(){
    int v1 = 5;
    double v2  = 5.23;
    char v3 = 'd';
    string v4 = "This is a String";
    bool v5 = true;
    float v6 = 4.11;

    printf("The Integer value is %d \n", v1);
    printf("The Double value is %f  \n", v2);
    printf("The Char value is %c \n", v3);
    printf("The String is \"%s\" \n", v4.c_str());
    printf("The bool value is %d \n", v5);
    printf("The float value is %f \n", v6);
    return 0;
}