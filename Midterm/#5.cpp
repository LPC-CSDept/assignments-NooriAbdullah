#include <iostream>
#include <fstream>

using namespace std;

// Function declarations
bool isSame(int num1, int num2);

int getInput(int &num1, int &num2);

int intDivision(int num1, int num2);

void fileWrite(ofstream &ofs, int num);

int main()
{
	int num1, num2;

	ofstream ofs("question5.txt"); // Open the numbers.txt file
	if (!ofs.is_open()) { // Can not open 
		cout << "Can not open numbers.txt for writing" << endl;
		return 1; // Exit from the program
	}

	while (getInput(num1, num2)) { // Loop until getInput returns 0
		int result = intDivision(num1, num2); // Store the division result
		fileWrite(ofs, result); // Write the result to file
	}

	ofs.close();

	return 0;
}

bool isSame(int num1, int num2) {
	return (num1 == num2);
}

int getInput(int &num1, int &num2) {
	cout << "Num1: ";
	cin >> num1;
	
	cout << "Num2: ";
	cin >> num2;

	if (isSame(num1, num2)) {
		return 0; // When both input are same
	}

	return 1;
}

int intDivision(int num1, int num2) {
	if (num1 > num2) {
		return (num1 / num2);
	} else if (num1 < num2) {
		return (num2 / num1);
	}
	return 0;
}

void fileWrite(ofstream &ofs, int num) {
	ofs << num << endl;
}
