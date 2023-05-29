#include <bits/stdc++.h>
using namespace std;

// int swaping(&a, &b){

//     int temp = *a;
//     *

// }
void permute(int arr[], int idx, int n)
{
    int ans;
    if (idx == n - 1)
    {
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    else
    {
        for (int i = idx; i < n; i++)
        {
            swap(arr[i], arr[idx]);
            permute(arr, idx + 1, n);
            swap(arr[i], arr[idx]);
        }
    }
}



int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    permute(arr, 0, n);

    return 0;
}