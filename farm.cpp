/* Moo moo, mothertruckers

    A farmer buys 100 animals for $100, How many of each animal did he buy? 
    This script is probably terrible, it was my first effort to learn
    (small things) about structs and passed by reference.
    
    Horses cost $10, 
    pigs cost $3, and 
    rabbits are only $0.50. 

*/

#include <iostream>
#include <math.h>

using namespace std;

struct Animal {
  string name;
  double price;
  int number;
} pig, rabbit, horse;

struct Farm { 
  Animal horses;
  Animal pigs;
  Animal rabbits;
} farm;

struct Wallet {
  double spent;    // total dollars spent
  double dollars;  // total dollars remaining
} wallet;


Animal makeAnimal(string name, double price);
Farm buyAnimals(Wallet * w, Farm * f);
Wallet getWallet(double dollars);
Farm makeFarm(Animal horses, Animal pigs, Animal rabbits);

int main() {

  string name;
  double price;
  double dollars = 100.0;
  bool maxout = false;

  // 1. Grab your wallet!
  wallet = getWallet(dollars);

  // 2. Make the Animals
  horse = makeAnimal(name = "horse", price = 10.00);
  pig = makeAnimal(name = "pig", price = 3.00);
  rabbit = makeAnimal(name = "rabbit", price = 0.50);

  // 3. Put them in a farm
  farm = makeFarm(horse, pig, rabbit);

  // 4. Calculate cost for each animal
  buyAnimals(&wallet, &farm);
  return 0;

}

Farm makeFarm(Animal horses, Animal pigs, Animal rabbits) {
  Farm f;
  f.horses = horses;
  f.pigs = pigs;
  f.rabbits = rabbits;
  return f;
}

Animal makeAnimal(string name, double price) {  
  Animal a;
  a.name = name;
  a.price = price;
  cout << "Created animal " << a.name << " with cost " << a.price << endl;
  return a;
}

Wallet getWallet(double dollars) {
    
  Wallet w;
  w.spent = 0.0;
  w.dollars = dollars;
  cout << "Created wallet with $" << w.dollars << endl;
  return w;
}


Farm buyAnimals(Wallet * w, Farm * f) {

  // Number of horses
  for (int h = 0; h < 100; h++)

    // Number of pigs
    for (int p = 0; p < 100; p++)

      // NUmber of rabbits
      for (int r = 0; r < 100; r++)

        // Count must be == 100
        if ((h + p + r) == 100)

          // Total price must also == $100
          if (((f->horses.price * h) + (f->pigs.price * p) + (f->rabbits.price * r)) == 100)
            cout << "Found one! " << h << " horses " << p << " pigs " << r << " rabbits "  << endl;

  return *f;
}
