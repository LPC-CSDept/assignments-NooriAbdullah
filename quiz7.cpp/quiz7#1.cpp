#include<cmath>
#include<iostream>
using namespace std;
const int N = 10;
bool check(int a[], int index);
int main()
{
	int number[N] = { 10,15,0,-25,19,20,25,30,45,20 };
	cout << "The Array :";
	for (int j = 0; j < N; j++)
	{
		
			cout << number[j]<<",";
	}
	cout << "\n\nThere are 10 elements with integer values in an array \n"<<
		"We will find the elements where the difference between the adjacent elements is less than 10\n\n";
	for (int i = 0; i < N; i++) 
	{
		if (check(number, i))
			cout << number[i] << " at index " << i << " is Meeting the criteria." << endl;
	}
}

bool check(int a[], int index) 
{
	if (index == 0 && (abs(a[index] - a[index + 1]) < 10))
		return true;
	if (index == N - 1 && (abs(a[index] - a[index - 1]) < 10))
		return true;
	if (index != N && index != 0 && (abs(a[index] - a[index + 1]) < 10) && (abs(a[index] - a[index - 1]) < 10))
		return true;
	return false;
}