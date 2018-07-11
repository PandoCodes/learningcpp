/* Enter columns of data until time to stop
 
   g++ enterdata.cpp -o enterdata

*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {

  char name[30];
  char file_name[30];
  char ice_cream[30];
  char animal[30];
  string cont;
  string story;

  cout << "Hi there friend! I'll help you collect ice cream data!" << endl;

  // File to write records
  cout << "Enter a filename to write your data! "; cin >> file_name;
  ofstream DataFile(file_name, ios::out);
  DataFile << "NAME\tICECREAM\tANIMAL" << endl;

  int count = 1;

  do {
    cout << "Adding the " << count << " record" << endl;
    cout << "Enter NAME: "; cin >> name;
    cout << "Enter ICECREAM: "; cin >> ice_cream;
    cout << "Enter ANIMAL:  "; cin >> animal;
    cout << endl;
    DataFile << name << "\t" << ice_cream << "\t" << animal << endl;
    cout << "Would you like to continue? (y/n)" << endl; cin >> cont;

    // Break if the user provides -1 value

    if ((cont == "no") or (cont == "n")){
        break;
    }

  } while (true);

  cout << "Done! Written to " << file_name << endl;
  return 0;
}
