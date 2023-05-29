#include<bits/stdc++.h>
using namespace std;

void rightRotate(int arr[], int n , int k)
{
    int p = 1;
    while(p<=k)
    {
        int f = arr[n-1];
        for(int i = n-1; i<=0; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[0] = f;
        p++;
    }
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void leftRotate(int arr[], int n , int k)
{
    int p = 1;

    while(p<=k)
    {
        int l = arr[0];

        for(int i = 0; i<n-1; i++)
        {
            arr[i] = arr[i+1];
        }

        arr[n-1] = l;
        p++;
    }
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

}


int main()
{
    int arr[] = {11,12,13,14,15,16};

    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 3;

    leftRotate(arr,n,k);
    cout<<endl;
    rightRotate(arr,n,2);

    return 0;
}