// #include<iostream>
// using namespace std;

// int BinarySearch(int n, int arr[], int key){
//     int start = 0;
//     int end = n-1;
//     int mid = 0;
//     while(start==end){
//         int mid = (start+end)/2;    

//         if(arr[mid] == key){
//             return mid;
//         }
//         if(arr[mid] < key){

//             start = mid+1;

//         }

//         else{

//             end = mid - 1;
//         }
//     }
//     return -1;
// }

// int Binary_Recursive(int n, int arr[], int key, int start, int end){
//     //base condition
//     // int mid = 
//     int mid = (start+end)/2;
//     if (start > end){
//         return -1;
//     }
//     if(arr[mid]==key){
//         return mid;
//     }

//     if(arr[mid]>key){
//         return Binary_Recursive(n,arr,key,mid+1,end);
//     }
//     return Binary_Recursive(n,arr,key,start,mid-1);
// }

// int main(){
//     int n;
//     cout<<"Enter Array Size: ";
//     cin>>n;
//     int arr[n];

//     for(int i=0;i<n;i++){
//         cout<<"Enter value index " <<i<<": ";
//         cin>>arr[i];
//     }
//     int key;
//     cout<<"Enter element you want to search: ";
//     cin>>key;

//     // cout<<BinarySearch(n,arr,key);
//     cout<<Binary_Recursive(n,arr,key,0,n-1);

//     return 0;
// }


// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code 
        int start = 0;
        int end = n-1;
        int mid = 0;
        while(start == end){
            int mid = (start+end)/2;
            if(arr[mid]==k){
                return mid;
            }
            if(arr[mid]<k){
                start = mid+1;
            }
            if(arr[mid]>k){
                end = mid-1;
            }
            return -1;
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}
  // } Driver Code Ends