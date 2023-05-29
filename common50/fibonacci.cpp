#include<bits/stdc++.h>
using namespace std;


// -------------------------------------method 1 ITERATIVE--------------------------------------
// int main()
// {
//     int n ;
//     cin>>n;
//     int s = 0;

//     if(n==0) cout<<"0, ";

//     else if(n==1) cout<<"0, 1, ";

//     else
//     {
//         int a = 0, b = 1;
//         cout<<a<<", "<<b<<", ";

//         int next;

//         for(int i = 2; i<=n; i++)
//         {
//             next = a + b;
//             a = b;
//             b = next;

//             cout<<next<<", ";
//         }
//     }
//     return 0;
// }

// -------------------------------------method 2 RECURSIVE--------------------------------------

int fib(int n)
{
    if(n<=1) return n;

    return fib(n-1) + fib(n-2);

}

int main()
{
    int n;
    cin>>n;

    for(int i = 0; i <= n; i++)
    {
        cout<<fib(i)<<", ";
    }

    return 0;
}

// ------------------------------LEETCODE---------------------------------------------------------

int fib(int n) 
{
    int s = 0;
    int a = 0, b = 1, next;

    if(n ==0) return 0;

    else if(n==1) return 1;

    else
    {
        for(int i =0; i<=n; i++)
        {
            next = a+b;
            a = b;
            b = next;
            
        }
        return next;
    }     

}

int main()
{
    int n = 5;
    cout<<fib(n);
    return 0;
}