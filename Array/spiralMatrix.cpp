#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>mat = {{1,2,3},{4,5,6},{7,8,9}};

    int rStart = 0, rEnd = mat.size()-1, cStart = 0, cEnd = mat[0].size()-1;

    while(rStart <= rEnd && cStart <= cEnd)
    {
        // row

        for(int c = cStart; c <= cEnd; c++)
        {
            cout<<mat[rStart][c]<<" ";
        }
        rStart++;
        
        //last col;

        for(int r = rStart; r <= rEnd; r++)
        {
            cout<<mat[r][cEnd]<<" ";
        }
        cEnd--;

        //last row

        for(int c = cEnd; c >= cStart; c--)
        {
            cout<<mat[rEnd][c]<<" ";
        }
        rEnd--;

        //first col;

        for(int r = rEnd; r >= rStart; r--)
        {
            cout<<mat[r][cStart]<<" ";
        }
        cStart++;
    } 

    // for(int i = 0; i< mat.size(); i++)
    // {
    //     for(int j = 0; j< mat[i].size(); j++)
    //     {
    //         cout<<mat[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    return 0;
}