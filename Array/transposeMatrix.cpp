#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};

    int n = mat.size();
    int m = mat[0].size();

    vector<vector<int>>res(m,vector<int>(n,0));
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            res[j][i] = mat[i][j];
        }
    }

    for(int i = 0; i<mat.size(); i++)
    {
        for(int j =0; j<mat[0].size(); j++)
        {
            cout<<res[i][j]<<" ";
        }
    }

    return 0;
}