#include<bits/stdc++.h>
using namespace std;

void minMax(vector<int> arr)
{
    sort(arr.begin(),arr.end());
    int max = 0;
    int min = 0;

    for(int i = 1; i < arr.size();i++ )
    {
        max += arr[i];
    }
    for(int i = 0; i < arr.size()-1; i++ )
    {
        min += arr[i];
    }

    cout<<min<<" "<<max;

}

int main()
{
    vector<int> arr = {9,7,1,3,5};

    minMax(arr);
}