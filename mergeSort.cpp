#include<iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int temp[(right-left)+1];
    int i = left, j = mid+1;
    int k = 0;

    while(i <= mid && j <= right)
    {
        if(arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    while(i <= mid)
    {
        temp[k] = arr[i];
        k++;
        i++;
    }
    while(j <= right)
    {
        temp[k] = arr[j];
        k++;
        j++;
    }

    for(int i=left; i<=right; i++)
    {
        arr[i] = temp[i-left];
    }

}

void mergeSort(int arr[], int left, int right)
{
    int mid = (left+right)/2;
    if(left >= right)
    {
        return;
    }
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    merge(arr, left, mid, right);
}

int main()
{
    int arr[] = {6,4,2,1,9,8,3,5,12,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, 0, n-1);

    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
