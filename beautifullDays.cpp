#include<bits/stdc++.h>
using namespace std;

int beautifulDays(int i, int j, int k) {

    int ans = 0;
    for( int day = i; day <= j; day++)
    {
        int rev = 0, n = day;
        while(n > 0)
        {
            rev = (rev *10) + (n %10);
            n /= 10;
        }

        if(abs(day - rev) % k == 0)
        {
            ans++;
        }
    }
    return ans;
}

int main()
{
    beautifulDays(20,23,6);
}