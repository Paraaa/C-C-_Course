#include <iostream>

using namespace std;

/**
 * Checks if a number is a primes based on the implementation of:
 * https://en.wikipedia.org/wiki/Primality_test#Miller%E2%80%93Rabin_and_Solovay%E2%80%93Strassen_primality_test
 * @author Fynn Benno Prusch, Andrej Schwanke
 */
int find_primes(const int pmax, bool primes[]) {
   int n_primes = 0;

   bool isPrime = true;

   for(int i = 2; i <= pmax; i++){
      isPrime = true;

      if(i == 2 || i == 3){
         primes[i] = true;
         n_primes++;
         continue;
      }
      if(i % 2 == 0 || i % 3 == 0){
         primes[i] = false;
         continue;
      }

      for(int j = 5; j * j <= i; j +=6){
         if(i % j == 0 || i % (j + 2) == 0){
            isPrime = false;
            break;
         }
      }

      primes[i] = isPrime;
      if(isPrime){
         n_primes++;
      }
   }
   return n_primes;
}

// main program
int main() {

  int pmax;
  cerr << "Enter upper limit for prime search: ";
  cin >> pmax;

  // create an array with prime decision
  bool *primes = new bool[pmax+1];

  // find the primes up to pmax, number of primes found is returned
  // and array primes[p] is true only when p is prime
  int nprimes = find_primes(pmax, primes);

  // print out all or last ten primes as result
  int plow=pmax;
  int c=0;
  while (c<10 and plow>1) if (primes[plow--]) c++;
  cout << "Last ten (or all) primes for pmax = "<< pmax << " are: ";
  for (int i=plow; i<=pmax; i++)
     if (primes[i]) cout << i << " ";
  cout << endl;
  cout << "The number of primes for pmax are: "<< nprimes << endl;
}
