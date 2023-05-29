#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int s = 0;
    int e = n-1;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    while(s<=e){
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
