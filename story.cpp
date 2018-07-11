/* Print the story from the text file (user input)
 
   g++ story.cpp -o story
   
*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {

  char file_name[30];
  string story;
  string line;

  cout << "Hi there friend! What story file would you like to read? "; cin >> file_name;
  cout << endl;

  ifstream Story(file_name, ios::in);

  // Ensure that exists
  if (!Story) {
    cout << "Cannot find " << file_name << endl;
    return 1;
  }

  if (Story.is_open()) {
    while ( getline (Story, line) ) {
      cout << line << '\n';
    }
    Story.close();
  }

  return 0;
}

