class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currSum = nums[0];
        int minSum = INT_MAX;
        int maxCurrSum = nums[0];
        int maxSum = nums[0];
        int minCurrSum = nums[0];

        for(int i=1; i<nums.size(); i++){
            currSum += nums[i];
            maxCurrSum = max(maxCurrSum + nums[i], nums[i]);
            minCurrSum = min(minCurrSum + nums[i], nums[i]);

            maxSum = max(maxSum , maxCurrSum);

            minSum = min(minSum , minCurrSum);
        }
        if(maxSum < 0){
            return maxSum;
        }else{
            return max(maxSum, currSum - minSum);
        }
    }
};