/* Moo moo, mothertruckers

    A farmer buys 100 animals for $100, How many of each animal did he buy? 

    Horses cost $10, 
    pigs cost $3, and 
    rabbits are only $0.50. 

*/

#include <iostream>

using namespace std;

// Let's make farm animals!

struct Animal
{

  string name;
  double price;
  int number;

} pig, rabbit, horse;

struct Wallet 
{
  double spent;    // total dollars spent
  double dollars;  // total dollars remaining
} wallet;

Animal makeAnimal(string name, double price);
Wallet buyAnimals(Wallet w, Animal a);
Wallet getWallet(double dollars);

int main() {

  string name;
  double price;
  double dollars = 100.0;

  // 1. Grab your wallet!
  wallet = getWallet(dollars);

  // 2. Make the Animals
  pig = makeAnimal(name = "pig", price = 3.00);
  rabbit = makeAnimal(name = "rabbit", price = 0.50);
  horse = makeAnimal(name = "horse", price = 10.00);

  // 3. Calculate cost for each animal
  buyAnimals(wallet, pig);
  buyAnimals(wallet, rabbit);
  buyAnimals(wallet, horse);

}

Animal makeAnimal(string name, float price) {
    
    Animal a;
    a.name = name;
    a.price = price;
    return a;
}

Wallet getWallet(double dollars) {
    
    Wallet w;
    w.spent = 0.0;
    w.dollars = dollars;
    return w;
}


Wallet buyAnimals(Wallet w, Animal a) {

    // 1. Money spent is (integer) of dollars / price 
    //double spent = w.dollars / a.price;

    // 2. Money we have left over is the remainder
    //a.number = w.dollars % a.price;

    //w.spent = a.number * a.price;

    //cout << "You bought " << a.number << " " << a.name << "s for" << a.spent << endl; 
    return w;

}
