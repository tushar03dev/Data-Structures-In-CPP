#include <bits/stdc++.h>
using namespace std;

int max =

int solve(vector<int>& nums,int index,unordered_map<int,set<vector<int>>>& mp, int sum, int k){
    if(index >= nums.size()){
        return 0;
    }
    if(k > 2){
        return 0;
    }

    mp[sum].insert([nums[index]]);

    int include = solve(nums,index+1,mp, sum+nums[index],k+1);

    int exclude = solve(nums, index+1,mp, sum, k);


}

int main() {
    vector<int> nums = {4,5,10,3,1,2,2,2,3};
    sort(nums.begin(),nums.end());
    unordered_map<int,set<vector<int>>> mp;
    solve(nums,0,mp,0,0);

    return 0;
}
