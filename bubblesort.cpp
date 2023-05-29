#include<iostream>
using namespace std;

void swap(int *x,int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){

    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i< n; i++){
        cin>>arr[i];
    }

    // for(int i=0;i<n-1;i++){

    //     for(int j=0;j<n-i-1;j++){

    //         if(arr[j+1]<arr[j]){

    //             int temp = arr[j+1];
    //             arr[j+1] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }
    bool swapped;
    for(int i=0;i<n-1;i++){

        swapped = false;
        for(int j=0;j<n-i-1;j++){

            if(arr[j]>arr[j+1]){
                
                swap(&arr[j],&arr[j+1]);
            }
        }
        if (swapped = true){
            break;
        }
        
    }

    for (int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}