#include<bits/stdc++.h>
using namespace std;

void climbingScoreBoard(int s, int scores[], int x, int trial[] )
{
    vector<int> res;
    for(int i = 0; i<x; i++)
    {
        int count = 1;
        int c = trial[i];
        for(int j = 0; j<s; j++)
        {
            if(c>= scores[j])
            {
                count++;
            }
            res.push_back(count);
        }

    }
    for(auto v: res)
    {
        cout<<res[v];
    }
}
int main()
{
    int s = 10;
    int scores[s] = {95,90,80,75,75,70,65,60,55,55};
    int x = 4;
    int trial[x] = {55,65,100,85};

    climbingScoreBoard(s,scores, x, trial);


    return 0;
}