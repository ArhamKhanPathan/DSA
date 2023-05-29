#include<bits/stdc++.h>
using namespace std;

int removeBadEle(int A[], int N)
{
    unordered_map<int,int>m;
        for(int k = 0; k < N; k++)
        {
            m[A[k]++];
        }
        if(m.size()==1)
            return 0;

        map<int, int> m;

        for (int i = 0; i < N; i++)
        {
            m[A[i]]++;
        }

        int maxx = 0;

        for (pair<int, int> p : m)
        {
            if (maxx < p.second)
            {
                maxx = p.second;
            }
        }
        int c = 0;
        for(int k = 0; k< N; k++)
        {
            if(A[k] != maxx)
            {
                c++;
            }
        }
        return c;
}

int main()
{
    // your code goes here
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        int A[N];
        for (int j = 0; j < N; j++)
        {
            cin >> A[j];
        }

        cout<<removeBadEle(A, N);
    }
}
