#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    
    RevArr(arr,0,n-1);

    for(int i=0;i<=n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}

void RevArr(int arr[], int s, int e){

    while(s<e){
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}