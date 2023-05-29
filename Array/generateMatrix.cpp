#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    vector<vector<int>>mat(n,vector<int>(n,0));

    int rStart = 0, rEnd = n-1, cStart = 0, cEnd = n-1;
    int c = 1;
    while(rStart <= rEnd && cStart <= cEnd && c<=n*n)
    {
        // first row
        for(int c = cStart; c <= cEnd; c++)
        {
            mat[rStart][c] = c;
            c++;
        }
        rStart++;

        // last column
        for(int r = rStart; r <= rEnd; r++)
        {
            mat[r][cEnd] = c;
            c++;
        }
        cEnd--;
        
        //last row
        for(int c = cEnd; c >= cStart; c--)
        {
            mat[rEnd][c] = c;
            c++;
        }
        rEnd--;

        //first col
        for(int r = rEnd; r >= rStart; r--)
        {
            mat[cStart][r] = c;
            c++;
        }
        cStart++;
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}