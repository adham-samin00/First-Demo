#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        bool flag = false;
        for(int j=0; j<n-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                flag = true;
            }
        }
        if(!flag)
        break;
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
    int arr[] = {6,4,2,1,9,8,3,5,12,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    bubbleSort(arr, n);

    cout<<"Sorted Array: ";
    printArray(arr, n);

    return 0;
}