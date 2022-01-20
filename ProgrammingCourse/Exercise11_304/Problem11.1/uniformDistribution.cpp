#include<iostream>
#include<cstdlib>
#include<random>
#include "classRandom.h"

using namespace std;

class Uniform: public LCG{
    private:
        double rmin;
        double rmax;

    public:
        Uniform(): LCG() {
            rmin = -1;
            rmax = 1;
        }
        Uniform(double i_rmin, double i_rmax) : LCG() {
            rmin = i_rmin;
            rmax = i_rmax;
        }

        double getRmin(){
            return rmin;
        }
        double getRmax(){
            return rmax;
        }
        void setRmin(double i_rmin){
            rmin = i_rmin;
        }
        void setRmax(double i_rmax){
            rmax = i_rmax;
        }

        double operator() (){
            random_device rd;
            mt19937 gen(rd());
            uniform_real_distribution<> dis(rmin,rmax);
            return dis(gen);
        }
};

int main(){
    Uniform rnd = Uniform();
    cout << "Without passing arguments: " << endl;
    for(int i = 0; i < 10; i++){
        cout << rnd() << endl;
    }
    cout << "Passing arguments [-2, 4]" << endl;
    Uniform rnd2 = Uniform(-2.0,4.0);
    for(int i = 0; i < 10; i++){
        cout << rnd2() << endl;
    }
    
}
