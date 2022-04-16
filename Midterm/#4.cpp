#include <iostream>

using namespace std;

// Get Random number between n1 to n2
int getRdnum(int n1, int n2) {
	return n1 + 1 + (rand() % (n2 + 1 - n1));
}

int getRdnum(int n2) {
	return 1 + (rand() % (n2 + 1));
}

int getRdnum() {
	return getRdnum(100);
}

int main()
{
	// Initialize the random seed
	srand(time(nullptr));

	// Test 3 of the functions 5 times
	for (int i = 0; i < 5; i++) {
		cout << "Random num within 1 to 100: " << getRdnum() << endl;
	}
	cout << endl;
	
	for (int i = 0; i < 5; i++) {
		cout << "Random num within 1 to 30: " << getRdnum(30) << endl;
	}
	cout << endl;

	for (int i = 0; i < 5; i++) {
		cout << "Random num within 31 to 70: " << getRdnum(31, 70) << endl;
	}
	return 0;
}