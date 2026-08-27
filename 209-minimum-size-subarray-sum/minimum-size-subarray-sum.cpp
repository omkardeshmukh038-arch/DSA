class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int low = 0;
        int high = 0;
        int length = INT_MAX;
        
        while(high < nums.size()){
            sum = sum + nums[high];
            while(sum >= target){
                int l = high - low + 1;
                length = min(length,l);
                sum = sum - nums[low];
                low++;
            }
            high++;
        }
        
        return length == INT_MAX ? 0 : length;
    }
};