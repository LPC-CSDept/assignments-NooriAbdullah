#include <iostream>
using namespace std;

int findMax(int number[], int from, int to)
{
    int max=0;
    for (int i = from; i < to; ++i)
    {
        // Change < to > if you want to find the smallest element
        if (max <  number[i])
            max = number[i];
    }
    return max;
}
int main() 
{
   const int N=10;
    int number[N] = { 10,15,0,-25,19,20,15,30,45,20 };
    cout << "Given Array :";
    for (int i = 0; i < 10; ++i)
    {
        cout<< number[i]<<" ";
    }
    cout<<"\n\n Largest element in between first Half = "<< findMax(number,0, N/2);
    cout << "\n\n Largest element in between first Half = " << findMax(number,N/2, N);
    return 0;
}
