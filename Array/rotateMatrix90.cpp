#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> in = {{1, 2, 3}
                             ,{4, 5, 6}
                             ,{7, 8, 9}};

    int n = in.size();

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j<i; j++)
        {
            swap(in[i][j],in[j][i]);
        }
    }

    for(int i = 0; i<n; i++)
    {
        reverse(in[i].begin(), in[i].end());
    }

    for(int i = 0; i< n; i++)
    {
        for(int j = 0 ; j<n; j++)
        {
            cout<<in[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}