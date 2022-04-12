#include <iostream>
#include <ctime>

using namespace std;

void getRandnum(int &n1, int &n2, int &n3) {
	n1 = rand();
	n2 = rand();
	n3 = rand();
}

int findMin(int n1, int n2, int n3) {
	if (n1 < n2 && n1 < n3) {
		return n1;
	} else if (n2 < n3 && n2 < n1) {
		return n2;
	}

	return n3;
}

void printResult(int n1, int n2, int n3, int min) {
	cout << "Minimum numbers between " << n1 << " " << n2 << " " << n3 << " is " << min << endl;
}

int main()
{
	srand((time(nullptr)));
	int n1, n2, n3, min;
	getRandnum(n1, n2, n3);
	min = findMin(n1, n2, n3);
	printResult(n1, n2, n3, min);

	return 0;
}