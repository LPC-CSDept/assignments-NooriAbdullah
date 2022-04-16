#include <iostream>

using namespace std;

int main()
{
	const int N = 5, M = 5;
	int i, j;
	for (i = 0; i < N; i++)
	{
		for (j = i; j < M - i; j++)
			cout << " (" << i << "," << j << ") ";
		cout << endl;
	}
	return 0;
}




 (0,0)  (0,1)  (0,2)  (0,3)  (0,4) 
 (1,1)  (1,2)  (1,3) 
 (2,2)

