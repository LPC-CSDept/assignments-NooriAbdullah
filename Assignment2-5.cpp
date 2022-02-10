#include <iostream>
using namespace std;

int main() 
{
double meal_charge = 88.67;
double tax = 6.75; 
double tip = 20;
double total_bill;
double tax_amount;

tax_amount = meal_charge * tax *  .01 ;
total_bill = meal_charge + tax_amount;
meal_charge + (total_bill *20 * .1);

cout << "Original meal charge \t" <<meal_charge <<endl;
cout << "tax: \t\t " << tax_amount<< endl;
}