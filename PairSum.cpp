#include<iostream>
using namespace std;

int main(){
    int N,S,ARR[N];
    cin>>N;

    cin>>S;
    for(int i=0; i<N;i++){
        cin>>ARR[i];
    }
    for (int i = 0; i<N;i++){
        for(int j = 1; j<i; j++){
            if(i+j==S){
                return i,j;
            }
        }
    }

}