#include<bits/stdc++.h>
using namespace std;

string biggerIsGreater(string w) {
    
    vector<int> v;
    for(int i = 0; i<w.size(); i++)
    {
        int n = int(w[i]);
        v.push_back(n);
    }

    for(auto it: v)
    {
        cout<<it<<" ";
    }

    int c = next_permutation(v.begin(),v.end());
    cout<<c;
}

int main()
{
    string w;
    cin>>w;
    biggerIsGreater(w);
}