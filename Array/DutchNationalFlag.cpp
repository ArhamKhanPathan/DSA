#include<bits/stdc++.h>
using namespace std;
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{

    vector<int> v = {2,0,1,1,0,1,0,2,0};

    int l = 0,m = 0, h = v.size()-1;

    while( m <= h)
    {
        if(v[m] == 0)
        {
            swap(v[l], v[m]);
            l++;
            m++;
        }
        if(v[m] == 1)
        {
            m++;
        }

        if(v[m] == 2)
        {
            swap(v[m],v[h]);
            h--;
        }
    }
    for(auto it : v)
    {
        cout<<it<<" ";
    }
    return 0;
}
