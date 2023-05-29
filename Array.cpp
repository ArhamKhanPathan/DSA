// #include<iostream>
// #include<conio.h>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;
//     int array[n];

//     for(int i=0;i<n;i++){
//         cin>>array[i];
//     }
//     int maxn=0;
//     int minn=0;
//     for (int i = 0; i < n; i++)
//     {
//         // if(arr[i]>maxn){
//         //     maxn = arr[i];
//         // }
//         maxn = max(maxn,array[i]);
//         minn = min(minn,array[i]);
//         // if(arr[i]<minn){
//         //     minn = arr[i];
//         // }

//     }
//     cout<<maxn<<" "<<minn<<endl;

//     return 0;
// }
//---------------------------------------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// void soe()
// {
//     int n, s = 0;
//     cin >> n;
//     char a[n], arr2[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr2[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] != arr2[i])
//         {
//             s++;
//         }
//     }
//     if (s == 0)
//     {
//         cout << 1 << endl;
//     }
//     else if (s == 1)
//     {
//         cout << 0 << endl;
//     }
//     else if (s % 2 == 0)
//     {
//         cout << 1 << endl;
//     }
//     else
//     {
//         cout << 0 << endl;
//     }
// }

// int main()
// {
//     int te;
//     cin >> te;
//     while (te--)
//     {
//         soe();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int rotatedSearch(int a[7], int target)
{
    int low = 0, high = 7 - 1;
    while (low<=high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == target)
            return mid;
        // the left side is sorted
        if (a[low] <= a[mid])
        {
            // figure out if element lies on left half or not
            if (target <= a[low] && target <= a[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        // right half is sorted
        else
        {
            if (target >= a[mid] && target <= a[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{

    int nums[7] = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    cout<<rotatedSearch(nums, target);

    return 0;
}

// int low = 0 , high = a.size ( ) - 1 ;
// while ( low high ) {
//     int mid ( low + high ) >> 1 ;
//     if ( a [ mid ] == target ) return mid ;
//    // the left side is sorted
//     if ( a [ low ] < = a [ mid ] ) {
//         // figure out if element lies on left half or not
//         if ( target = a [ low ] && target < = a [ mid ] ) {
//             high = mid - 1 ;
//        }
//         else {
//             low = mid + 1 ;
//        }
//    }
//     // right half is sorted
//     else {
//         if ( target > = a [ mid ] && target < = a [ high ] ) {
//             low = mid + 1 ;
//        }
//         else {
//             high mid - 1 ;