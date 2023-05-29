//You are given an integer N. Your task is to return a 2-D ArrayList containing the pascal’s triangle till the row N.


#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        int a;
        cin>>a;

        for(int j=1; j<=a; j++){
            for(int k=1; k<=j; k++){
                cout<<k<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}