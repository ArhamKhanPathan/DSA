#include<bits/stdc++.h>
using namespace std;

//------------------------- Arham Khan - mahrA nahK-----------------------------------------------
int main()
{
    string s = "Arham Khan";
    // cin>>s;

    int lastspace = -1;
    int l = (int)s.size();

    for(int i  = 0; i <= l; i++)
    {
        if(i == l || s[i] == ' ')
        {
            int start = lastspace + 1;
            int stop = i -1;

            while(start < stop )
            {
                char temp = s[start];
                s[start] = s[stop];
                s[stop] = temp;
                start++;
                stop--;
            }
            lastspace = i;
        }
    }
    cout<<s;

    return 0;
}


// int main()
// {
//     string s;
//     cin>>s;

//     int start = 0, stop = s.length()-1;

//     while(start<stop)
//     {
//         char temp = s[start];
//         s[start] = s[ stop];
//         s[stop] = temp;
//         start++, stop--;
//     }
//     cout<<s;

//     return 0;
// }