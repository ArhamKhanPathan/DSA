#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[5]= {1,2,3,2,3};

    int s = sizeof(a)/sizeof(a[0]);

    vector<int> arr;

    for(int i= 0; i<s; i++)
    {
        arr.push_back(a[i]);
    }

    sort(arr.begin(), arr.end());

    int rs[s];
    for(int i=0; i<s; i++)
    {
        rs[i] = arr[i];
    }

    for(int j = 0; j<s; j++)
    {
        for(int k = j+1; k<s; k++)
        {
            if(arr[j]==arr[k])
            {
                cout<<j<<" ";
            }
        }
    }



    for(int i = 0; i < s; i++)
    {
        cout<<rs[i]<<" ";
    }
    cout<<endl;


    

    return 0;
}