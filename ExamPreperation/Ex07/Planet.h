#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Planet {
    private: 
        string name;
        double distance;
        int    num_moons;
    public:
        Planet() {}
        Planet(string n, double dist, int moons) {
            name = n;
            distance = dist;
            num_moons = moons;
        }

        double period() {
            return sqrt(distance*distance*distance);
        }

        void print() {
            cout << "Planet " << name << " is at distance of "
                << distance << " AU with a period of " << period() 
                << " years and has " << num_moons << " moons" << endl; 
        }

        void setName(string n){
            name = n;
        }
        void setDist(double d){
            distance = d;
        }
        void setMoons(int m){
            num_moons = m;
        }

        string getName(){
            return name;
        }
        double getDist(){
            return distance;
        }
        int getMoons(){
            return num_moons;
        }
};