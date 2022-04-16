#include <iostream>
#include <fstream>

using namespace std;

int precedingNum; // Global variable to keep track the preceding number

// Get Random number between 1 to 50
int getRdnum() {
	return 1 + (rand() % 50);
}

// Return 1 if n is greater than precedingNum otherwise 0
int isGreater(int n) {
	if (n > precedingNum) {
		return 1;
	}

	return 0;
}

int main()
{
	// Initialize the random seed
	srand(time(nullptr));

	ofstream ofs("numbers.txt"); // Open the numbers.txt file
	if (!ofs.is_open()) { // Can not open 
		cout << "Can not open numbers.txt for writing" << endl;
		return 1; // Exit from the program
	}

	int N = 10;
	int temp = getRdnum();
	ofs << temp; // Append First Number to file
	precedingNum = temp; // Update the preceding num
	N--;

	while (N > 0) { // Until N is 0
		temp = getRdnum();
		if (isGreater(temp)) { // If new number is greater than preceding number
			ofs << " " << temp; // Append the number
			precedingNum = temp; // Update the preceding num to new number
		}
		N--;
	}

	ofs.close(); // Close the file

	return 0;
}