#include <iostream>
#include <exception>
#include <string> 

using namespace std;

int main() {
  
  int a;
  int b; 

  // ask user to enter two numbers and store values in a and b
  cout << "Enter two numbers: ";
  cin >> a >> b;

  // calculate a divided by b and print out result
  try{
    if(b==0) throw "b is not allowed to be 0.";
    double x = a/b;
    cout << a << " divided by " << b << " is equal to " << x << endl;
  } catch(const char* e) {
    	cerr << e << endl;
  }
}
