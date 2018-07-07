/* A basic hello world example
  @ vsoch */ 

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  // cout right alignment
  cout << setiosflags(ios::right);

  // rows
  for (int i=0; i<6; i++ ) {

    // columns
    for (int j=0; j<4; j++)
      cout << setw(17) << "Hello World!";

    // Newline
    cout << endl;
  }
  return 0;

}
