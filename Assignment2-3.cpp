#include <iostream>
using namespace std;

int main()
{
	int regular_hours;
	int work_hours;
	int overtime_hours;
	double regular_rate;
	double overtime_rate;
	double total_wage;

	work_hours = 50;
	regular_hours=40;
    regular_rate = 18.25;
    overtime_hours;
	overtime_hours = work_hours - regular_hours;
	total_wage = regular_hours * regular_rate + overtime_hours * overtime_rate ;  
  
cout << "Total wage of the is employee is " << total_wage<< endl;
}