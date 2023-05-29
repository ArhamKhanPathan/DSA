#include<bits/stdc++.h>
using namespace std;

void color(vector<int>c, int m, int n)
{
    int r = 0,  g = 0, b = 0;
    for(int i = 0; i < m*n; i++)
    {
        if(0 <= c[i]<= 80) r++;
        else if(81 <= c[i] <= 175) g++;
        else b++;
    }

    int ans = max(r,max(g,b));

    if(ans == r) cout<<"RED";
    else if(ans == g) cout<<"GREEN";
    else cout<<"BLUE";
}
int main()
{
    int m,n;
    m = 3, n = 3;
    vector<int> c = {120,110,110,160,170,183,195,196,198};
    color(c,m,n);
}