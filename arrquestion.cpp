#include <bits/stdc++.h>
using namespace std;

// int main() {

// 	int n;
// 	cout<<"Enter Array size: ";
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cout<<"Enter value of index "<<i<<" : ";
// 		cin>>arr[i];
// 	}
//maximum value till nth element.........................
	// int mx = -99999999;
	// for(int j=0;j<n;j++){
	// 	mx = max(mx, arr[j]);
	// 	cout<<"Maximum value till "<<j<<" index: "<<mx<<endl;
	// }


//sum of all subarrays of an array.......................
// 	for (int i=0; i<n; i++){
// 		int curr = 0;
// 		for(int j=i; j<n; j++){
// 			curr += arr[j];
// 			cout<<curr<<endl;
// 		}
// 	}

// find the max length of the longest contiguous arithmetic subarray..........
// 	int ans = 2;
// 	int nor = 2;
// 	int j = 2;
// 	int pd = arr[1]-arr[0];
// 	while(j<n){
// 		if(pd == arr[j]-arr[j-1]){

// 			nor++;
// 		}
// 		else{

// 			pd = arr[j]-arr[j-1];
// 			nor =2;
// 		}
// 		ans = max(ans,nor);
// 		j++;
// 	}
// 	cout<<ans;
	

	

// 	return 0;
// }

//------------------------------------------------------------------------------------------------------------------------


// int main()
// {
// 	int arr[5] = {2,4,5,7,8};
// 	int sum = 0;
// 	for (int i=0; i<5; i++)
// 	{
// 		sum+=arr[i];
// 	}
// 	cout<<sum;
// }
