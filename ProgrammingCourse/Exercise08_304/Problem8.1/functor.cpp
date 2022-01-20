#include <iostream>
#include <cmath>

using namespace std;


class Functor {

    private:
        double a = 0;
        double b = 0;

    public:
        Functor(const double ain, const double bin){
            a = ain;
            b = bin;
        }

        double operator()(const int x){
            if(x==0) return b + a;
            return (b * x + sin(a * x)) / x; 
        }

};

int main(){
    Functor f = Functor(4.32,9.25);

    for(int x = -10; x <= 20; x++){
        double res =  f(x);
        cout << x <<" "<< res << endl;
    }
}