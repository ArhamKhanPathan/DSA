#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s = "aabdcbd";
    map<char,int> mp;

    for(int i = 0; i< s.size(); i++ )
    {
        mp[i] = -1;
    }

    for(auto it: s)
    {
        if(mp[it] == 1){
            cout<<mp[it];
        }
    }

    return 0;
}