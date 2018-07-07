/* Greatest common divisor 

  compile:  g++ gcd.cpp -o gcd
  run:     ./gcd

  Thanks to Euclidean, because algorithms are hard for dinosaurs
  @vsoch programmer dinosaur

*/

#include <iostream>

using namespace std;

int calculateGcd(int a, int b);
int getNumber();

int main() {

  int a, b = 0;

  do {
    // 1. Collect two positive numbers from the user
    cout << "Enter the first number to compute the greatest common divisor: ";
    a = getNumber();
    cout << "Enter the second number: ";
    b = getNumber();        
    cout << endl;
  } while((a==0) and (b==0));


  // 2. Compute greatest Common Divisor
  int gcd = calculateGcd(a, b);

  // 3. Tell user the result!
  cout << "The greatest common divisor is " << gcd << "." << endl;

  return 0;
}

int getNumber() {

  int number = 0;

  // Invalid input, will ask again by returning -1
  if (!(cin >> number)) {
    cout << "Please enter a valid positive number!" << endl;

  } else {        
    // Entering 0 is not allowed
    if (number > 0){
      return number;
    }
  }

  // A return value of indicates no change.
  return 0;
}

int calculateGcd(int a, int b) {

  cout << "You entered " << a << " and " << b << endl;

  // A holder for b
  int holder = b;

  // https://en.wikipedia.org/wiki/Euclidean_algorithm
  while (b!=0) {

      holder = b;
      b = a % b;
      a = holder;

  }
     
  return a;
}
