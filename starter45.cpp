#include<bits/stdc++.h>
using namespace std;

int m(int in1, int in2, int in3[])
{
    for(int i =0; i<in1;i++)
    {
        for(int j = i+1; j<i; j++)
        {
            if(in3[i]<in3[j])
            {
                int temp = in3[i];
                in3[j] = in3[i];
                in3[i] = temp;
            }

        }
    }

    for(int i = 0; i<in1; i++)
    {
        cout<<in3[i]<<endl;
    }
}

int main()
{
    int in1,in2;
    int in3[in1];

    cin>>in1>>in2;
    for(int i = 0; i< in1; i++)
    {
        cin>>in3[i];
    }

    m(in1,in2, in3);
    return 0;
}