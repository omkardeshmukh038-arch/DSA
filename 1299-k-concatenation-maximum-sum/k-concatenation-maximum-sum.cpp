class Solution {
public:
    int kConcatenationMaxSum(vector<int>& nums, int k) {

        if(nums.size() == 0){
            return 0;
        }

        long long currSum = 0;
        long long maxi = 0;

        for(int i = nums.size()-1; i >= 0; i--){
            currSum = max(currSum + nums[i], (long long)nums[i]);
            maxi = max(currSum, maxi);
        }

        long long sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }

        if(k == 1){
            return maxi % 1000000007;
        }

        long long result = maxi;

        long long currSum1 = 0;
        long long maxiSum = 0;

        for(int i = 0; i < nums.size(); i++){
            currSum1 += nums[i];
            maxiSum = max(maxiSum, currSum1);
        }

        long long currSum2 = 0;
        long long maxiSum2 = 0;

        for(int i = nums.size()-1; i >= 0; i--){
            currSum2 += nums[i];
            maxiSum2 = max(maxiSum2, currSum2);
        }

        result = max(result, maxiSum + maxiSum2);

        if(k > 2 && sum > 0){
            result = max(result, maxiSum + maxiSum2 + sum * (k-2));
        }

        return result % 1000000007;
    }
};