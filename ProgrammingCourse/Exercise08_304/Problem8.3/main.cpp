#include <iostream>
#include "classRandom.h"


using namespace std;

int main(){
    LCG rnd(65539,0,pow(2,31));
    rnd.setSeed(564613);
    for(int i = 0; i <= 10000; i++){
        for(int j = 0; j < 3; j++){
            cout << rnd() / pow(2,31) << " "; 
        }
        cout << endl;
    }
}
