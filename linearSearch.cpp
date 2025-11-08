#include<iostream>
using namespace std;

void linearSearch(int arr[], int n, int key, bool flag)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == key)
        {
            cout<<"Data found at index ["<<i<<"]";
            flag = true;
            break;
        }       
    }
    if(flag == false)
    {
        cout<<"Data not found in the array";
    }
}

int main()
{
    int arr[] = {10,15,30,70,80,60,20,90,40};
    int n = sizeof(arr)/sizeof(arr[0]);\
    bool flag = false;

    int key;
    cout<<"Enter a value to search: ";
    cin>>key;

    linearSearch(arr, n, key, flag);

    return 0;   
}