/* How many ways can you arrange 6 different books, left to right, on a shelf? */

#include <iostream>

using namespace std;

int main() {

  cout << "How many ways to arrange 6 books on a shelf?" << endl;

  // Each number represents options / choices per slot
  int ways = 6*5*4*3*2*1;
  cout << ways << " ways" << endl;

  return 0;
}
