#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    for(int i = 0; i < n; i++)
    {
        nums1[i+m] = nums2[i];
    }
    sort(nums1.begin(),nums1.end());
    for(auto i:nums1)
    {
        cout<<nums1[i]<<" ";
    }
}

int main()
{
    vector<int> nums1 = {-1,0,0,3,3,3,0,0,0};
    vector<int> nums2 = {1,2,2};

    int m = 6;
    int n = 3;
    merge(nums1,m,nums2,n);
}