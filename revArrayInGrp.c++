#include<bits/stdc++.h>
using namespace std;
// void printIntersection(int arr1[], int arr2[], int n1, int n2)
// {
//     // Defining set container s
//     set<int> s;
     
//     //  Insert the elements of arr1[] to set s
//     for (int i = 0; i < n1; i++)
//     {
//         s.insert(arr1[i]);
//     }
     
//     cout << "Intersection:" << endl;
     
//     for (int i = 0; i < n2; i++)
//     {
//         // If element is present in set then
//         if(s.count(arr2[i]))
//         {
//             cout<<arr2[i]<<" ";
//         }
//     }
         
//     cout <<endl;
// }
 
// // Driver Code
// int main()
// {
//     int arr1[] = { 7, 1, 5, 2, 3, 6 };
//     int arr2[] = { 3, 8, 6, 20, 7 };
//     int n1 = sizeof(arr1) / sizeof(arr1[0]);
//     int n2 = sizeof(arr2) / sizeof(arr2[0]);
 
//     // printUnion(arr1, arr2, n1, n2);
//     printIntersection(arr1, arr2, n1, n2);
// }

// vector<int> inter(vector<int>arr1, vector<int>arr2)
// {
    
// }

int main()
{
    vector<int> arr1 = {1,2,2,1};
    vector<int> arr2 = {2,2};

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    vector<int> ans;

    int i,j = 0;

    while(i < arr1.size() && j < arr2.size())
    {
        if(arr1[i] <  arr2[j])
        {
            i++;
        }
        else if(arr1[i] > arr2[j])
        {
            j++;
        }

        else 
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    for(auto it: ans)
    {
        cout<<ans[it]<<" ";
    }
    // inter(arr1, arr2);

    return 0;
}

 