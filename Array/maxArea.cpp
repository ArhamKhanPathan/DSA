#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>in = {1,8,6,2,5,4,8,3,7};
    
    int l = 0;
    int r = in.size()-1;
    int maxx = 0;

    while(l<r)
    {
        int left = in[l];
        int right = in[r];
        int minHi = min(left,right);
        maxx = max(maxx, minHi * (r -l));
        if(left > right) l++;
        else r--;
    }
    cout<<maxx;

    return 0;
}