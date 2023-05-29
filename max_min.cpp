#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<=n; i++){
        cin>>arr[i];
    }

    int maxx = -999999;
    int minn = 9999999;

    for(int i=0; i<=n; i++){
        if(arr[i]>maxx){
            maxx = arr[i];
        }
        if(arr[i]<minn){
            minn = arr[i];
        }
    }
    cout<<maxx<<endl;
    cout<<minn<<endl;
    
    return 0;
}