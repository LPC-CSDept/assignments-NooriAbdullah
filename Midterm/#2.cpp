#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	ifstream ifs("students.txt"); // Open the file students.txt for reading
	if (!ifs.is_open()) { // If file not open
		cout << "Can not open students.txt file" << endl;
		return 1; // Exit the program
	}

	// Vector (array) to store the names of students and their two scores
	vector<string> names;
	vector<int> scores1, scores2;

	while (ifs) { // Until file is not empty
		string name;
		int score1, score2;
		ifs >> name; // Read the student name
		ifs >> score1 >> score2; // Read their two scores

		// Insert the name and scores
		names.push_back(name);
		scores1.push_back(score1);
		scores2.push_back(score2);
	}

	ifs.close(); // Close the file stream

	int count = 0; // Count how many got the average more than 80

	for (int i = 0; i < names.size(); i++) {
		// Calculate the sum and average and print it out
		double avg = (1.0 * (scores1[i] + scores2[i]) / 2.0);
		cout << "Student name: " << names[i] 
				 << "\tScore 1: " << scores1[i]
				 << "\tScore 2: " << scores2[i]
				 << "\tSum: " << (scores1[i] + scores2[i])
				 << "\tAvg: " << avg
				 << endl;
		
		if (avg > 80) {
			count++;
		}
	}

	cout << "The total number of students who has the average > 80 : " << count << " students" << endl;

	return 0;
}