#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     // your code goes here
//     int T;
//     for (int i = 0; i < T; i++)
//     {
//         int N;
//         int arr[N];
//         for (int j = 0; j <= N; j++)
//         {
//             cin >> arr[j];
//         }

//         for (int k = 0; k < N; k++)
//         {
//             if (arr[k] > arr[k + 1])
//             {
//                 int hcf;
//                 for (int i = 1; i <= arr[k+1]; ++i)
//                 {
//                     if (arr[k] % i == 0 && arr[k+1] % i == 0)
//                     {
//                         hcf = i;
//                     }
//                 }

//                 arr[k] = hcf;
//             }
//         }
//     }
//     return 0;
// }

void m(int in1, int in2, int in3[])
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