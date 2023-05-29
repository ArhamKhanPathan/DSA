#include<iostream>
using namespace std;

int main(){

    int n,temp,rev=0,digit;

    cout<<"Enter a Number: ";
    cin>>n;

    n = temp;

    while (temp!=0)
    {
        digit=temp%10;
        rev = (rev*10) + digit;
        temp=temp/10;
    }
    if(n=rev)
    {
        cout<<"pallindrome";
    }
    else
    {
        cout<<"non pallindrome";
    }

    return 0;
}
