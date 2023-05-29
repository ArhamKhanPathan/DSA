#include<bits/stdc++.h>
using namespace std;

int kth(int arr[], int k,int s)
{
    vector<int>v;
    // int s = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<s; i++)
    {
        v.push_back(arr[i]);
    }
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    return v[k-1];
}

int main()
{
    int arr[7] = {4,7,6,2,3,9,11};
    int k = 3;
    int s = 7;
    cout<<kth(arr,k,s);
    return 0;

}