/* A simple guessing game */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// function to generate random number
int generateRandom(int max);

int main() {

  int max = 100;

  // 1. Set random seed
  srand(time(NULL));

  // 2. Generate a random number
  int number = generateRandom(max);

  // 2. Ask the user to guess
  cout << "Guess a random number between 1 and " << max << endl;

  // Set a guess to be an impossible value
  int guess = max + 1;

  do {

      // This will return false if not valid
      if (!(cin >> guess)) {

        // Invalid guess
        cout << "That is not a number!" << endl;

      } else {

          // 3. Check if it's a match
          if ( guess == number ) {
            cout << "You got it! The random number is " << number << endl;  
            break;
          }
          else if ( guess < number ) cout << "Too low!" << endl;
          else cout << "Too high!" << endl;
      }

  } while ( guess != max );

  cout << "We're done!" << endl;
  return 0;

}

int generateRandom(int max) {
    return (rand()%max) + 1;
}
