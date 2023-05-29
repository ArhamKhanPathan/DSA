#include<iostream>
using namespace std;

int main(){
        // find factorial of a number
    int n;
    long int m =1;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1;i<=n;++i){
        m*=i;
    }
    cout<<m<<endl;
    // -------------------------------------
        // Trailing zeros in factorial
    // int res = 0;
    // for(int i=0;i<m;i*5){
    //     res = res + (n/i);
    // }
    // cout<<res;

    return 0;
}