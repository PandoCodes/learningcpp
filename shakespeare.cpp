/* Playing with strings */

#include <iostream>
using namespace std;

int main() {
  string str1 = "To be or not to be, that is the question";
  string str2 = "only ";
 
  // Start at 6 (o) and go 12 characters to (e) "or not to be"
  string str3 = str1.substr(6, 12);

  // At 32 (q) insert "only" --> "To be or not to be, that is the only question."
  str1.insert(32, str2);

  // Find the second to be (position 0, (t)) and go 5 characters to e, replace with "to jump"
  // "To be or not to jump, that is the only question"
  str1.replace(str1.find("to be", 0), 5, "to jump");
  cout << str1 << endl;

  // Erase starting at 9 (n) for 4 (until empty space) to remove "not"
  // "To be or to jump, that is the only question"

  str1.erase(9, 4);
  cout << str1 << endl;

  // This is just another way to print string 3, 1 character at a time
  for (int i = 0; i < str3.length(); i++)
    cout << str3[i]; cout << endl;

  // This function is obviously about suicide...
  // "To be or to jump, that is the only question."

}
