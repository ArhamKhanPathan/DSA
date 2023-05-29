#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int c = 0;
    for(int i = 0; i<=n; i++)
    {
        if(i^k > i&k) c++;
    }

    cout<<c;

    return 0;

}

