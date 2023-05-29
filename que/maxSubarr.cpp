#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxx = INT_MIN;
    int currmax = 0;

    for(int i=0; i<n;i++){

        currmax = arr[i] + currmax;
        maxx = max(maxx, currmax);

        if(currmax<0){
            currmax = 0;
        }

    }
    cout<<maxx;

    return 0;
}