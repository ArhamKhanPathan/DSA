#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    //     print
    //  * * * * * *
    //  * * * * * *
    //  * * * * * *
    //  * * * * * *
    //  * * * * * *
    //  * * * * * *
    // int row,col;
    // cin>>row>>col;

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j =1; j <= col; j++)
    //     {
    //         cout<<" *";
    //     }
    //     cout<<endl;
    // }

    // print
    // *****
    // *   *
    // *   *
    // *****
    // int row,col;
    // cin>>row>>col;

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= col; j++)
    //     {
    //         if (i==1 || i==row || j==col ||j==1)
    //         {
    //             cout<<"*";
    //         }
    //         else
    //         {
    //             cout<<" ";
    //         }

    //     }
    //     cout<<endl;

    // }

    // print
    // * * * *
    // * * *
    // * *
    // *
    int n;
    cin >> n;

    // for (int i = n; i >=1; i--)
    // {
    //     for (int j = 1; j <= i ; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;

    // }
    // print
    //    *
    //   * *
    //  * * *
    // * * * *
    // int n;
    // cin>>n;

    // for (int i = 1; i <=n ; i++)
    // {
    //     for (int j = 1; j <=n ; j++)
    //     {
    //         if(j<=n-i)
    //         {
    //             cout<<" ";
    //         }
    //         else
    //         {
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // print
    // 1
    // 22
    // 333
    // 4444
    //     int n;
    //     cin>>n;

    //     for (int i = 1; i <=n ; i++){
    //         for (int j = 1; j <=i; j++)
    //         {
    //             cout<<i;
    //         }

    //         cout<<endl;
    //     }

    // print floyd triangle
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    //     int n;
    //     cin>>n;
    //     int count=1;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 1; j <=i ; j++)
    //         {
    //             cout<<count<<" ";
    //             count++;
    //         }
    //         cout<<endl;
    //     }

    // int n;
    // cin>>n;

    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     int space = 2*n-2*i;
    //     for(int j = 1; j<=space; j++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for (int i = n; i >=1; i--)
    // {
    //     for (int j = 1; j <= i; j++){
    //         cout<<"* ";
    //     }
    //     int space = 2*n - i*2;
    //     for(int j = 1; j<=space; j++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // print
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1
    //     for(int i=1; i<=n; i++){
    //         for(int j=1; j<=n+1-i; j++){
    //             cout<<j<<" ";
    //         }
    //         cout<<endl;
    //     }

    // print
    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    //     for(int i=1; i<=n; i++){
    //         for(int j=1; j<=i; j++){
    //             if((i+j)%2==0){
    //                 cout<<"1 ";
    //             }
    //             else{
    //                 cout<<"0 ";
    //             }
    //         }
    //         cout<<endl;
    //     }

    // print
    //    * * * *
    //   * * * *
    //  * * * *
    // * * * *
    //     for(int i=1; i<=n; i++){
    //         for(int j=1; j<=n-i; j++){
    //             cout<<" ";
    //         }
    //         for (int j = 1; j <= n; j++)
    //         {
    //             cout<<"* ";
    //         }
    //         cout<<endl;
    //     }

    // print
    //    1
    //   1 2
    //  1 2 3
    // 1 2 3 4
    //     for(int i=1; i<=n; i++){
    //         for(int j=1; j<=n-i; j++){
    //             cout<<" ";
    //         }
    //         for(int j=1; j<=i; j++){
    //             cout<<j<<" ";
    //         }
    //         cout<<endl;
    //     }

    // print
    //    1
    //   212
    //  32123
    // 4321234
    //     for(int i=1; i<=n; i++){
    //         int j;
    //         for (j = 1; j <=n-i; j++)
    //         {
    //             cout<<" ";
    //         }
    //         int k = i;
    //         for (; j <=n ; j++)
    //         {
    //             cout<<k--;
    //         }
    //         k =2;
    //         for(; j<=n+i-1 ; j++){
    //             cout<<k++;
    //         }
    //         cout<<endl;
    //     }

    // print
    //    *
    //   ***
    //  *****
    // *******
    // *******
    //  *****
    //   ***
    //    *
    //     for(int i=1; i<=n; i++){
    //         for(int j=1; j<=n-i; j++){
    //             cout<<" ";
    //         }
    //         for (int j = 1; j <= 2*i-1; j++)
    //         {
    //             cout<<"*";
    //         }
    //         cout<<endl;
    //     }
    //     for(int i=n; i>=1; i--){
    //         for(int j=1; j<=n-i; j++){
    //             cout<<" ";
    //         }
    //         for (int j = 1; j <= 2*i-1; j++)
    //         {
    //             cout<<"*";
    //         }
    //         cout<<endl;
    //     }

    // print
    //   *   *
    //  * * * *
    // *   *   *
    //     for(int i=1; i<=3; i++){
    //         for (int j = 1; j <=n; j++)
    //         {
    //             if((i+j)%4==0){
    //                 cout<<"*";
    //             }
    //             else if (i==2 && j%4==0)
    //             {
    //                 cout<<"*";
    //             }
    //             else{
    //                 cout<<" ";
    //             }
    //         }
    //         cout<<endl;
    //     }

    // int n;
    // cin >> n;
    for (int i = 1; i < n; i++)
    {

        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n; j++)
        {
            cout << "#";
        }

        cout << endl;
    }

    // return 0;
}