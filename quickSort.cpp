#include<bits/stdc++.h>
using namespace std;

void quickSort(int arr[], int s, int e)
{
    if(s>=e)
    {
        return;
    }

    int p = partition(arr, s, e);
    
    quickSort(arr, s, p-1);
    quickSort(arr,p+1, e);
}

int partition(int arr[], int s, int e)
{
    int pivot = arr[0];
    int c = 0;
    for(int i = 0; i < 6; i++)
    {
        if(arr[i] <= pivot )
        {
            c++;
        }
    }

    int pvtIdx = s + c;
    swap(arr[s], arr[pvtIdx]);

    int i = s, j = e-1;

    while(i < pvtIdx && j > pvtIdx)
    {
        while(arr[i] <= pivot )
        {
            i++;
        }

        while(arr[j] >= pivot)
        {
            j--;
        }

        if(i < pvtIdx && j > pvtIdx)
        {
            swap(arr[i++],arr[j--]);
        }

    }

    return pvtIdx;
}
int main(){

    // int n;
    // cin>>n;

    int arr[6] = {4,3,1,8,6,0};
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    int siz = sizeof(arr)/arr[0];
    int s = 0, e = 6-1;
    quickSort(arr, s, e);
    
    for(int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}