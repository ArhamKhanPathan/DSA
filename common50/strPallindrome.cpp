#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    bool pal = true;
    int l = str.length();
    int a = 0, b = l-1;
    while(a<=b)
    {
        if(str[a] != str[b]) pal = false;
        a++;
        b--;
    }
    if(pal) cout<<"pallindrome";
    else cout<<"not pallindrome";

    return 0;

}

// if (n != 0)
//     return n + addNumbers(n - 1);
// else
//     return n;