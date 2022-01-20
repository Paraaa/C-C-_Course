#include <iostream>
#include "classRandom.h"

using namespace std;

int main(){
    LCG rnd = LCG(9,6,32);
    for(int i = 0; i <= 32*3; i++){
        cout << i << " " << rnd() << endl;
    }
}