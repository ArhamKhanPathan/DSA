#include<bits/stdc++.h>
using namespace std;
vector<int> breakingRecords(vector<int> scores) {
    
    int most = 0;
    int least = 0;
    int mx = scores[0];
    int mn = scores[0];
    for(int i = 0; i<scores.size(); i++)
    {
        if(scores[i] > mx)
        {
            mx = scores[i];
            most++;
        }
        
        if(scores[i] < mn)
        {
            mn = scores[i];
            least++;
        }
        
    }
    vector<int> m = {most, least};
    return m;
}

int main()
{
    vector<int> scores = {10,5,20,20,4,5,2,25,1};
    vector<int> res = breakingRecords(scores);

    for(auto it: res)
    {
        cout<<it<<" ";
    }
}