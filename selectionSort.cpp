#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int minIndx = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[minIndx])
            {
                minIndx = j;
            }
        }
        swap(arr[i], arr[minIndx]);
    }
}

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {4,3,2,10,12,1,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, n);

    cout<<"Sorted Array: ";
    printArray(arr, n);

    return 0;
}