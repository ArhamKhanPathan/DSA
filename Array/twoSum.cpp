#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> nums, int target) {
    unordered_map<int,int>mp;
    vector<int> ans(2);

    for(int i = 0; i < nums.size(); i++)
    {
        if( mp.find( target - nums[i]) != mp.end())
        {
            ans[0] = mp[target - nums[i]];
            ans[1] = i;
            break;
        }

        mp[nums[i]] = i;

    }
    return ans;
}

int main()
{
    vector<int> nums ={4,8,6,3,1};
    int target = 11;
    twoSum(nums, target);
}