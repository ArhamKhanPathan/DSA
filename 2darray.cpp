#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4], int t, int row, int col)
// 2d array me col size batana zaruri hota hai
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == t)
            {

                return 1;
            }
        }
    }
    return 0;
}

void printSum(int arr[][4], int row, int col)
{
                                                    //printing row wise sum
    // for (int row = 0; row < 3; row++)
    // {
    //     int sum = 0;
    //     for(int col =0; col < 4; col++)
    //     {
    //         sum += arr[row][col];
    //     }
    //     cout<<sum<<endl;
    // }


                                        //printingcolumn wise sum
    for (int col = 0; col < 4; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << endl;
    }
}

void largestRowSum(int arr[][4],int row, int col)
{
    int maxi = INT_MIN;
    int rowIdx = 0;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for(int col =0; col < 4; col++)
        {
            sum += arr[row][col];

        }
        if(sum>maxi)
        {
            maxi = sum;
            rowIdx = row+1;
        }
    }
    cout<<"Lagest sum "<<maxi<<" and index: "<<rowIdx;
}

int main()
{

    // int m,n;
    // cin>>m>>n;

    int arr[3][4];
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    // int t;
    // cout<<"target: ";        //ye isPrwesent() ke liye hai
    // cin>>t;

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    
    // printSum(arr, 3, 4); // printSum()

    // if(isPresent)
    // {
    //     cout<<"True";
    // }
    // else{
    //     cout<<"False";
    // }

    // largestRowSum(arr,3,4);                     //largestRowSum()

    return 0;
}