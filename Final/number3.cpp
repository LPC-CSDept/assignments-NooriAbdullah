#include<iostream>
using namespace std;

bool isSubset(int numbers1[],int numbers2[],int SIZE1,int SIZE2)
{
	int i = 0, j = 0;
	while (i < SIZE1 && j < SIZE2)
	{
		if (numbers1[i] == numbers2[j])
		{
			i++;
			j++;
		}
		else if (numbers1[i] > numbers2[j])
		{
			j++;
		}
		else
			break;
	}

	if (i == SIZE1)
		return true;

	return false;
}

void printout(int numbers[], int last) {
    for (int i = 0; i < last; i++)
        cout << numbers[i] << " ";
	cout << endl;
}

int main()
{
	const int SIZE1 = 5;
	const int SIZE2 = 10;
	int numbers1[SIZE1] = { 2, 3, 6, 9, 10};
	int numbers2[SIZE2] = { 1, 2, 3, 5, 9, 10, 11, 13, 15, 17 };

	printout(numbers1, SIZE1);
	if (isSubset(numbers1, numbers2, SIZE1, SIZE2))
	{
		cout << "is a subset of " << endl;
	}
	else
	{
		cout << "is not a subset of " << endl;
	}
	printout(numbers2, SIZE2);

	return 0;
}