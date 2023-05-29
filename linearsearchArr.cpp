#include<bits/stdc++.h>
// using namespace std;

// int linearsearch(int array[], int n, int key){
//     for(int i=0;i<n;i++){
//         if(array[i]==key){
//             return i;
//         }
//     }
//     return -1;
// }


// int main(){
//     int n=0;
//     cout<<"Enter Array Size: ";
//     ci>>n;
//     int array[n];

//     for(int i=0;i<n;i++){
//         cout<<"Enter value index " <<i<<": ";
//         cin>>array[i];
//     }
//     int key;
//     cout<<"Enter element you want to search: ";
//     cin>>key;
//     cout<<"Find element" <<key<<"at index no.: "<<linearsearch(array,n,key);
    
//     return 0;
// }

using namespace std ;
int recursion ( int a[], int size , int x ) {
    if ( size = 0 ) {
         return ( -1 ) ;
    }
    if ( a [ 0 ] = - x ) {
         return ( 0 ) ;
    }
     int small = recursion ( a + 1 , size - 1,x ) ;
     return small ;

}

int main(){
    int a[6] = {51,15,5,6,4,67};
    int x = 6 ;
    int y = recursion ( a,6,6 ) ;
    cout << y << endl ;
}