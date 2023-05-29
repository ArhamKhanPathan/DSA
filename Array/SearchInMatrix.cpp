#include<bits/stdc++.h>
using namespace std;

bool search(vector<vector<int>>mat, int target)
{
    int r = 0, c = mat.size()-1;
    bool res = false;

    while(r < mat.size()-1 && c >= 0)
    {
        if( mat[r][c] == target)
        {
            res = true;
        }

        if(mat[r][c] > target)
        {
            c--;
        }
        else r++;
    }
    return res;
}
int main()
{
    vector<vector<int>>mat = {{1, 2, 3}
                             ,{4, 5, 6}
                             ,{7, 8, 9}};
    
    int target = 5;
    cout<<search(mat, target);
    return 0;
}