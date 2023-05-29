#include<bits/stdc++.h>
using namespace std;

int main()
{
    int rev = 0, n, digit, temp;

    cin>>n;
    temp = n;

    while(temp !=0)
    {
        digit = temp%10;
        rev = (rev*10) + digit;
        temp = temp/10;
    }
    cout<<rev<<endl;
    if(n==rev) cout<<"pallindrome";
    else cout<<"not pallindrome";
    return 0; 
}