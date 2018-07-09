/* Write a simple text file with some user input 
 
   g++ icecream.cpp -o icecream
   "Everyone glorious and wonderful usually involves ice cream."

*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {

  char name[30];
  char file_name[30];
  char ice_cream[30];
  char animal[30];
  string story;

  cout << "Hi there friend! What is your name? "; cin >> name;
  cout << "What is your favorite flavor of ice cream? "; cin >> ice_cream;
  cout << "What about your favorite animal? "; cin >> animal;
  cout << endl;

  cout << "Enter a filename to write to! "; cin >> file_name;

  cout << "Thank you! We have written you a special story to " << file_name << endl;
  
  ofstream Story(file_name, ios::out);

  // Write story to it!
  Story << "There was once a " << animal 
        << " named " << name 
        << " that loved " << ice_cream 
        << " ice cream! The end!" << endl; 

  return 0;
}

