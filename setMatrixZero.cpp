#include<bits/stdc++.h>
using namespace std;

int setZero(int arr[][3])
{

    int col[3];
    int row[3];

    for(int i=0; i<3; i++)
    {

        for(int j=0; j<3; j++)
        {
            if(arr[i][j] == 0)
            {
                row[j] = -1;
                col[j] = -1;
            }
        }
    }
}

int main(){

    int n;
    cin>>n;

    int arr[3][3] = {

        {1 , 2 , 3},
        {4 , 0 , 5},
        {7 , 8 , 9}
    };
    
    cout<<setZero(arr);
    


    return 0;
}