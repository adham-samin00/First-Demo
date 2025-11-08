#include<iostream>
using namespace std;


//just to update git
int main()
{
    int arr[] = {1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49};
    int n = sizeof(arr)/sizeof(arr[0]);
    int searchData[3] = {17,37,42};


    for (int k=0; k<3; k++)
    {
        int search = searchData[k];
        int left = 0, right = n-1;
        int found = -1;

        while(left <= right)
        {
            int mid = (left+right)/2;
            if(arr[mid] == search)
            {
                found = mid;
                break;
            }
            else if(arr[mid] < search)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        if(found != -1) {
            cout<<"Key "<<search<<" was found at index "<<found<<endl;
        }
        else
        {
            cout<<"Key "<<search<<" was not Found."<<endl;
        }
    }


    cout<<"Elements >= 17: ";
    for(int i=0; i<n; i++)
    {
        if (arr[i] >= 17)
        {
            cout<<arr[i]<<" ";
        }
    }
    cout << endl;

    cout <<"Elements <= 37: ";
    for (int i=0; i<n; i++)
    {
        if (arr[i] <= 37)
        {
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;

    return 0;
}
