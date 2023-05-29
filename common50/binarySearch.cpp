#include<bits/stdc++.h>
using namespace std;

void binary(vector<int> v, int k)
{
    int s = 0, e = v.size();
    while(s<= e)
    {
        int mid = (s+e)/2;

        if(v[mid] == k ) 
        {
            cout<<"Yes";
            break;
        }

        else if(v[mid] < k) s = mid; 

        else mid = e;
    }
}

int main()
{
    int a,k;
    vector<int>v ;
    cin>>a;
    int b;
    for(int i = 0; i< a; i++)
    {
        cin>>b;
        v.push_back(b);

    }
    cin>>k;

    binary(v,k);
    return 0;
}