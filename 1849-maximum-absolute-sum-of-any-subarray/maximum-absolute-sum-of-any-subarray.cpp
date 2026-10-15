class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int currSum = nums[0];
        int currSumMin = nums[0]; 
        int maxSum = nums[0];
        int minSum = nums[0];
        for(int i=1; i<nums.size(); i++){
            currSum = max(currSum+nums[i], nums[i]);
            currSumMin = min(currSumMin + nums[i],nums[i]);
            maxSum = max(currSum,maxSum);

            minSum = min(currSumMin,minSum);

        }
        return max(abs(maxSum),abs(minSum));
    }
};