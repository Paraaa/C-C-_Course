/********************************************************************************
 *
 * structPlanet.cpp: a program using struct Planet for storing planet data 
 *
 * Copyright (C) October 2014               Stefan Harfst (University Oldenburg)
 * This program is made freely available with the understanding that every copy
 * of this file must include this header and that it comes without any WITHOUT
 * ANY WARRANTY.
 ********************************************************************************/
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

// structure for planets
class Planet {
  private: 
    string name;
    double distance;
    int    num_moons;

  public:
    Planet(){}
    Planet(string n, double d,int m){
        name = n;
        distance = d;
        num_moons = m; 
    }

    double period() {
      /**
       * Implementation based on: 
       * https://github.com/DavincoRaymoon/physics_bachelor/blob/main/mathematical_methods_of_physics/C3_Circular_orbits.ipynb
       */
			double r = 0;
			double c = 2.97e-19;
			r = sqrt((4.51*pow(10,23))*c *pow(distance,3));
			return r; 
		}

    void print(){
      cout << "Planet "
          << name << " is at disctance of " 
          << distance << " AU with a period of " 
          << period() << " days and has " 
          << num_moons << " moons. " << endl; 
    }

    string getName(){
      return name; 
    }
    double getDistance(){
      return distance; 
    }
    int getNumMoons(){
      return num_moons;
    }

    void setName(const std::string n) {
			name = n;
		}
		void setDistance(const double d) {
			distance = d;
		}

		void setNumMoons(const int n) {
			num_moons = n;
		}

};

int main() {
  string name; 
  double distance;
  int moon;
  ifstream file("planets.dat");
  
  while(file >> name >> distance >> moon){
    Planet planet(name, distance, moon);
		planet.print();
  }
}
