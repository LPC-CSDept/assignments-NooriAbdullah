#include <iostream>
#include <ctime>

using namespace std;

void swapTwoValues(int &n1, int &n2) {
	int t = n1;
	n1 = n2;
	n2 = t;
}

void swapTwoValues(float &f1, float &f2) {
	float t = f1;
	f1 = f2;
	f2 = t;
}

int main()
{
	int n1 = 7, n2 = 5;
	float f1 = 5.7, f2 = 10.4;

	cout << "Before swap n1 = " << n1 << " n2 = " << n2 << endl;
	swapTwoValues(n1, n2);
	cout << "After swap n1 = " << n1 << " n2 = " << n2 << endl;

	cout << "Before swap f1 = " << f1 << " f2 = " << f2 << endl;
	swapTwoValues(f1, f2);
	cout << "After swap f1 = " << f1 << " f2 = " << f2 << endl;

	return 0;
}