class Solution {
public:
    vector<int> dp;
    bool canReach(int idx , vector<int>& nums){
        if(idx >= nums.size()-1){
            return true;
        }
        if(dp[idx] != -1){
            return dp[idx];
        }
        bool flag = false;
        for(int i=1 ; i<=nums[idx]; i++){
            
            flag = flag || canReach(idx+i,nums);
            if(flag){
                break;
            }
            
            
        }
        
        dp[idx] = flag;
        return flag;
    }

    bool canJump(vector<int>& nums) {
        dp  = vector<int> (nums.size(),-1);
        return canReach(0,nums);
    }
};