class Solution {
public:

    void combination(vector<int>&nums, int tar, int sum , int i, vector<vector<int>>&ans,vector<int> ds){
        if(sum == tar){
            ans.push_back(ds);
            return;
        }
        if(i == nums.size()|| sum > tar){
            return;
        }
        
        ds.push_back(nums[i]);
        sum += nums[i];
        combination(nums,tar,sum,i+1,ans,ds);
        ds.pop_back();
        sum -= nums[i];
        while(i + 1 < nums.size() && nums[i] == nums[i+1]){
            i++;
            continue;
        }
        combination(nums,tar,sum,i+1,ans,ds);
    }

    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        combination(nums,target,0,0,ans,ds);


        return ans;

        
    }
};