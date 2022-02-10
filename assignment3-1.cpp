#include <iostream> 
using namespace std;

int main ()
{
 int classA;
 int classB;
 int classC;

int priceA = 15;
int priceB =12;
int priceC =9; 

int total;

cout << "enter the number of tickets sold for class A:";
cin >> classA;
cout <<"enter the number of tickets sold for class B:";
cin >> classB;
cout <<"enter the number of tickets sold for class C:";
cin >> classC;

total = (classA* priceA) + (classB * priceB) + (classC * priceC);
cout <<"total price fro ticket sold"<< total << endl;

}