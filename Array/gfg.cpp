#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v = {0,0,1,1,1,0};
    int n = v.size();

    int o = 0, z = 0;
    for(int i = 0; i< n; i++)
    {
        if(v[i]== 0) z++;
        else o++;
    }

    if(o>z || o==z)
    {
        int c = 0;
        for(int i = 0; i<n; i++)
        {
            if(v[i]==0)
            {
                if(v[i]==1) break;
                v[i]=1;
                c++;
            }
        }
    }

    for(int i = 0; i<n; i++)
    {
        cout<<v[i]<<' ';
    }

    return 0;
}