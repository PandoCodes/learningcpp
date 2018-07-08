/* A calculator to determine the optional salary choice 

    You have just gotten a position as a salesperson for the ExerShoe company, 
    specializing in high-end exercise shoes costing around $225 per pair. 
    Your boss has given you three options for compensation, 
    which you must choose before you begin your first day:

    Straight salary of $600 per week;
    A salary of $7.00 per hour plus a 10% commission on sales;
    No salary, but 20% commissions and $20 for each pair of shoes sold
    You, being an expert C++ programmer, figure you can write a program 
    to help decide the best choice of compensation.

*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct WeeklySales {
  int shoes;
  int price;
} sales;


int GetInput();
double CalcMethod1(WeeklySales w);
double CalcMethod2(WeeklySales w);
double CalcMethod3(WeeklySales w);


int main() {

  WeeklySales sales;
  int option1, option2, option3;  

  // Price of shoes
  cout << "Please enter a price (dollars) per pair of shoes:";
  sales.price = GetInput();
  cout << "Price of shoes is $" << sales.price << "." << endl;

  // Number of shoes sold
  cout << "Please enter a number of pairs of shoes sold in a week:";
  sales.shoes = GetInput();
  cout << sales.shoes << " shoes sold in a week." << "." << endl;
  
  // Calculate each option
  option1 = CalcMethod1(sales);
  option2 = CalcMethod2(sales);
  option3 = CalcMethod3(sales);
  
  return 0;
}

int GetInput() {

  int value;

  if (!(cin >> value)) {

    return 225;

  } else {

    return value;
  }

}

double CalcMethod1(WeeklySales w) {
  // Straight salary of $600 per week;
  cout << "Option 1: $600 per week." << endl;
  return 600;
}
double CalcMethod2(WeeklySales w) {
  // A salary of $7.00 per hour plus a 10% commission on sales;

  double salary;
  salary = (40.0 * 7.0) + (0.1 * (w.shoes * w.price));
  cout << "Option 2: $" << salary << " per week, assuming 40 hours/week." << endl;
  return salary;

}

double CalcMethod3(WeeklySales w) {

  // No salary, but 20% commissions and $20 for each pair of shoes sold
  double salary;
  salary = (0.2 * (w.shoes * w.price));
  cout << "Option 3: $" << salary << " per week." << endl;
  return salary;
}
