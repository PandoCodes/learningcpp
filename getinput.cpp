/* A script to learn getting an input */

#include <iostream>
using namespace std;

int main() {

  int choice = 0;
  do {
    cout << "Enter an integer (-1 to exit)";

    // False if invalid
    if (!(cin >> choice)) {
      cout << "Please enter only numbers!" << endl;

      // Clean up illegal input
      cin.clear();
      cin.ignore(10000, '\n');
    }
    if ( choice != -1 ){
      cout << "You entered " << choice << endl;
    }
  } while (choice != -1);
    cout << "All done" << endl;
    return 0;
}
