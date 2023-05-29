#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5,6,7};

    int s = 0, l = v.size()-1;

    while(s<l)
    {
        int temp = v[s];
        v[s] = v[l];
        v[l] = temp;
        s++, l--;
    }

    for(auto i = 0; i<=l ; i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}