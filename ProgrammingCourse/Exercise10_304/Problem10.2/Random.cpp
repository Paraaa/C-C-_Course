/********************************************************************************
 *
 * Random.cpp: a program to generate a list of random numbers 
 *
 * Copyright (C) December 2016              Stefan Harfst (University Oldenburg)
 * This program is made freely available with the understanding that every copy
 * of this file must include this header and that it comes WITHOUT ANY WARRANTY.
 ********************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <getopt.h>

using namespace std;

// function returns a random number in range [0..1[
double drand() {
   return double(rand())/RAND_MAX;
}

// main program 
int main(int argc, char *argv[]) {
   // define default values, may be overwritten by cmd-line args
   int    num_values = 5;
   time_t initial_seed = time(NULL);
   
   
   char opt;
   try{
      while ((opt = getopt(argc, argv,"hn:os:ox")) != -1) {
         switch (opt) {
            case 'h':
               cout << "-h: Prints help message." <<endl;
               cout << "-n arg: Prints random numbers in a given amount arg." <<endl;
               cout << "-s arg: Sets the initial seed of the pseudorandom number generator" <<endl;
               cout << "-x: Prints help and possible erros" << endl;
               return 0;
            case 'n':{
               char* n_values = optarg;
               num_values = atoi(n_values);
               if(num_values < 0){
                  throw "NegativNumberExeption: Please provide a positiv number as an argument.";
               }
               break;
            }
            case 's':{
               char* seed = optarg;
               initial_seed = atoi(seed);
               break;
            }
            case 'x':{
               cout << "Available Options: " << endl;
               cout << "-h: Prints help message." <<endl;
               cout << "-n arg: Prints random numbers in a given amount arg." <<endl;
               cout << "-s arg: Sets the initial seed of the pseudorandom number generator" <<endl;
               cout << "-x: Prints help and possible errors" << endl;  
               
               cout << "NegativNumberExeption: Is thrown if option -n gets a negative numer as an argument." << endl;
               return 0;
            }
         }
      }
   } catch(const char* e){
      cerr << e << endl; 
   }


   // initialize with seed and print random values
   srand(initial_seed);
   for (int i=0; i<num_values; ++i) {
      cout << drand() << endl; 
   }
}
