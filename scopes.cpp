// scope.cpp, Maggie Johnson
// Description: A program to illustrate different scopes

#include <iostream>
using namespace std;

int a = 18;
int b = 6;

int function1(int a, int b) {
  // 12-18 = -6
  return a - b;
}

int function2() {
  int c;
  c = a + b;
  return c;
}

int main() {
  int b = 12;
  int c = 0;
  // passing in 12, 18, this is -6
  // global a is now -6
  a = function1(b, a);

  // 0, because b is 6 defined in global, and a is modified to be -6
  c = function2();
  //               -6            12              0
  cout << "a: " << a << " b: " << b << " c: " << c << endl;
}
