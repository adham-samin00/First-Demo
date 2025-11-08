#include<iostream>
using namespace std;

int partition(int A[], int start, int end) 
{
    int pivot = A[start];
    int p = start + 1;
    int q = end;

    while(p <= q) 
    {
        while(p <= q && A[p] <= pivot)
            p++;
        while(p <= q && A[q] > pivot)
            q--;
        if(p < q) 
        {
            swap(A[p], A[q]);
        }
    }
    swap(A[start], A[q]);
    return q;
}

void quickSort(int A[], int start, int end) 
{
    if(start < end) 
    {
        int pivotPosition = partition(A, start, end);
        quickSort(A, start, pivotPosition-1);
        quickSort(A, pivotPosition+1, end);
    }
}

int main() 
{
    int A[] = {7,6,10,5,9,2,1,15,7};
    int size = sizeof(A)/sizeof(A[0]);

    quickSort(A, 0, size - 1);

    cout<<"Sorted array: ";
    for(int i = 0; i < size; i++) 
    {
        cout << A[i] << " ";
    }
    return 0;
}

