#include<bits/stdc++.h>
using namespace std;
int choco(int N)
{
    int R=0;

    
    R=R+N%3;
    if(R>3)
    {
       
        N+=1;
    }
    
    if(N<3)
    {
        return N;
    }
    int t =  N + choco(N/3);
    return t;
}
int main()
{
    int N;
    cin>>N;
    cout<<choco(N);
}