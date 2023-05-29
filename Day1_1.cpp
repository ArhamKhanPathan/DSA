#include<iostream>
using namespace std;

int main(){
    int matrix[3][4] = {{0,1,2,0},{3,4,8,2}, {1,3,1,5}};
    for(int i= 0 ;i<=3; i++){
        if(matrix[i] == 0){
            matrix[i][0] = -1;
        }
        for(int j = 0 ; j<=3; j++){
            if(matrix[i][j]==-1){
                matrix[i][j]=0;
            }
            cout<<matrix;
        }
    }
    
    return 0;
}