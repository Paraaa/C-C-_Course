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
#include "Planet.h"

using namespace std;


int main() {

  // planet variables, one with initializer list
  Planet earth;
  Planet mars = Planet("Mars", 1.52,2);
  // data for Earth
  earth.setName("Earth");
  earth.setDist(1.0);
  earth.setMoons(1);

  // output for Earth
  earth.print();
 
  // output for Mars
  mars.print();

}
