#include <bits/stdc++.h>
using namespace std;

// int power(int x,int n)
// {
//     if(n==0)
//     {
//         return 1;
//     }
//     int kam = power(x,n-1);
//     return x*kam;
// }
// int main()
// {
//     int x;
//     int n;
//     cin>>x>>n;
//     int output = power(x,n);
//     cout<<output<<endl;
// }
//--------------------------------------------------------------------------------------------------------

// void number(int n)
// {
//     if(n>0)
//     {
//         number(n-1);
//     }
//     else{
//         return;
//     }
//     cout<<n<<endl;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     number(n);

// }---------------------------------------------------------------------------------------------------

// int count(int n)
// {
//     static int c = 0;
//     if(n==0)
//     {
//         return c;
//     }
//     else
//     {
//         c++;
//     }
//     return count(n/10);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<count(n);
// }
//----------------------------------------------------------------------------------------------------------------

// bool is_sort(int arr[], int size)
// {
//     if(size == 0 || size == 1)
//     {
//         return true;
//     }

//     if(arr[0] > arr[1])
//     {
//         return false;
//     }

//     bool smaller_sort = is_sort(arr+1, size-1);

//     return smaller_sort;
// }

// int main()
// {
//     int arr[7] = {1,2,3,4,5,6,7};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     cout<<is_sort(arr, size);
// }
//----------------------------------------------------------------------------------------------------------------

// int sum_arr(int arr[], int n)
// {
//     if(n <= 0)
//     {
//         return 0;
//     }
//     return (sum_arr(arr, n-1) + arr[n-1]);

// }

// int main(){

//     int n;
//     cin>>n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

//     cout<<sum_arr(arr,n)<<endl;
// }
//----------------------------------------------------------------------------------------------------------------

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5}; // 1,3,5,4,2
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int s = 0;
//     int e = n - 1;
//     for (int i = 1; i < n; i++)
//     {
//         int temp = arr[i];
//         int j = i - 1;

//         while (j >= 0 && arr[j] > temp && (arr[j]/2) == 0)
//         {

//             arr[j] = temp;
//             j--;
//         }
//         arr[j + 1] = temp;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << "\t";
//     }

//     return 0;
//     // cout<<arrange_arr(arr,n)<<endl;
// }

//----------------------------------------------------------------------------------------------------------------

// int first_idx(int arr[], int size, int x)
// {
//     if(size<=0)
//     {
//         return -1;
//     }
//     if(arr[0] == x)
//     {
//         return 1;
//     }
//     int ans;
//     ans = first_idx(arr+1 ,size-1, x );
//     if(ans == -1 ){
//         return -1;
//     }
//     else{
//         return ans+1;
//     }


// }

// int main()
// {
//     int arr[6] = {5,4,6,7,8,7};
//     int x = 7;
//     int size = 6;
//     cout<<first_idx(arr, size,x);
// }

//----------------------------------------------------------------------------------------------------------------

// int last_idx(int arr[], int size, int x)
// {
//     if(size <= 0)
//     {
//         return -1;
//     }

//     int ans = last_idx(arr+1, size-1,x);

//     if(ans == -1){
//         if(arr[0] == x)
//         {
//             return 0;
//         }
//         else{
//             return -1;
//         }
//     }

// }

// int main()
// {
//     int arr[6] = {4,5,4,6,8,7};
//     int size = 6;
//     int x = 7;

//     cout<<last_idx(arr,size,x);

// }

//---------------------------------------------------------------------------------------------------------------------------------------------

// int all_idx(int arr[], int size, int x, int output[])
// {
//     if(size == 0)
//     {
//         return 0;
//     }

//     int ans = all_idx(arr, size-1, x, output);

//     if(arr[size-1] == x)
//     {
//         output[ans]=size-1;
//         return ans+1;
//     }
//     else
//     {
//         return ans;
//     }


// }

// int main()
// {
//     int arr[6] = {2,3,2,3,5,3};
//     int size = 6;
//     int x = 2;

//     int output[size];
//     int m = all_idx(arr,size,x,output);
//     for(int i=0; i<m; i++)
//     {
//         cout<<output[i]<<" "<<endl;
//     }
// }

//---------------------------------------------------------------------------------------------------------------------------------------------

// int multi(int m, int n)
// {
//     if(n == 0)
//     {
//         return 0;
//     }
    
//     int ans = multi(m,n-1);

//     return ans+m;
// }

// int main()
// {
//     int m;
//     cin>>m;
//     int n;
//     cin>>n;
//     cout<<multi(m,n);
// }
//---------------------------------------------------------------------------------------------------------------------------------------------


// int count_zero(int n)
// {
//     if(n == 0)
//     {
//         return 1;
//     }

//     int ans = count_zero(n/10);
//     int c = 0;
//     if(ans == 0 || n&10==0)
//     {
//         c++;
//     }

//     return c;
// }
// int main()
// {
//     int n = 1010;

//     cout<<count_zero(n);
// }

//---------------------------------------------------------------------------------------------------------------------------------------------

// bool checkidx(char s[], int start, int end)
// {
//     if(s[start] == s[end] )
//     {
//         if(checkidx(s,start+1,end-1))
//         {
//             return true;
//         }
//         else return true;
//     }
// }
// bool is_palindrome(char s[])
// {
//     int l = strlen(s);
//     if(l == 0)
//     {
//         return true;
//     }

//     return checkidx(s, 0, l-1);
// }
// int main()
// {
//     char s[] = "ebcba";
//     if(is_palindrome(s))
//     {
//         cout<<"true";
//     }
//     else cout<<"false";

// }

#include <iostream>

using namespace std;
bool checkSequence(string s, string t)
{

      if(t.empty() == 0)
        return true;
    if(s.empty() == 0)
        return false;

    if(s[0] == t[0])
        return checkSequence(s.substr(1), t.substr(1));
    else
        return checkSequence(s.substr(1), t);
}
int main()
{
    string s;
    string t;
    cin>>s>>t;
    cout<<checkSequence(s,t);
}