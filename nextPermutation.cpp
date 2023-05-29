#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> in = {3,2,1};

    vector<int>res(in.size());
    res = in;

    next_permutation(in.begin(),in.end());

    if(res == in)
    {
        sort(in.begin(),in.end());
        for(auto i: in)
            cout<<i<<" ";
    }
    else
    for(auto it:in)
        cout<<it<<" ";
    return 0;
}