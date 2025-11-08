#include <iostream>
using namespace std;

void countingSort(int A[], int n) 
{
    int max = A[0];

    for(int j = 1; j < n; j++) 
    {
        if(A[j] > max) 
        {
            max = A[j];
        }
    }

    int C[100] = {0};

    for(int j = 0; j < n; j++) 
    {
        C[A[j]]++;
    }

    int i = 0;
    for(int val = 0; val <= max; val++) 
    {
        while(C[val] > 0) 
        {
            A[i++] = val;
            C[val]--;
        }
    }
}

int main() 
{
    int A[] = {6,4,2,1,9,8,3,5,12,10,11};
    int n = sizeof(A)/sizeof(A[0]);

    countingSort(A, n);

    cout<<"Sorted array: ";
    for(int i = 0; i < n; i++) 
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
