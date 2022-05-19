#include<iostream>
#include<fstream>
# define MAX_EMPLOYEES 50
using namespace std;

struct Date
{
	string month;
	int day;
	int year;
};

struct Employee
{
	int ID;
	string FirstName;
	string LastName;
	double salary;
	string Department;
	Date date;
};

void constructEmployees(Employee employees[],int &i)
{

	ifstream fin("employee.txt");
	while (fin >> employees[i].ID)
	{
		fin >> employees[i].FirstName;
		fin >> employees[i].LastName;
		fin >> employees[i].salary;
		fin >> employees[i].Department;
		fin >> employees[i].date.month;
		fin >> employees[i].date.day;
		fin >> employees[i].date.year;
		i++;
	}

}

void printEmployee(Employee e)
{
	cout << e.ID << " " << e.FirstName << " " << e.LastName << " " << e.salary << " " << e.Department << " " << e.date.month << " " << e.date.day << " " << e.date.year << endl;
}

void filterBySalary(Employee employees[],int n, double salary)
{
	cout << "Employees having salary greater than " << salary << " are:" << endl;
	for (int i = 0; i < n; i++)
	{
		if(employees[i].salary>salary)
			printEmployee(employees[i]);
	}
	cout << endl;
}

void filterByDepartment(Employee employees[], int n, string department)
{
	cout << "Employees are working in " << department << " department:" << endl;
	for (int i = 0; i < n; i++)
	{
		if (employees[i].Department==department)
			printEmployee(employees[i]);
	}
	cout << endl;
}


int main()
{
	Employee employees[MAX_EMPLOYEES]; //Array of struct of maximum employees
	int no_of_employees=0;

	constructEmployees(employees, no_of_employees);
	filterBySalary(employees, no_of_employees, 10000);
	filterByDepartment(employees, no_of_employees, "Computer");

	return 0;
}