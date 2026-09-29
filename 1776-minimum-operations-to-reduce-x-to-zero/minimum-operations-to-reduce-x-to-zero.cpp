class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        if(nums[0] > x && nums[nums.size()-1] > x){
            return -1;
        }
        int windowSum = 0;
        int minlen = INT_MAX;
        int maxSum = 0;
        int low = 0;

        for(int i=0; i<nums.size(); i++){
            maxSum += nums[i];
        }

        int k = maxSum - x;
        for(int high =0; high < nums.size(); high++){
            windowSum += nums[high];

            while(windowSum > k){
                windowSum = windowSum - nums[low];
                low++;
                if(low > high){
                    break;
                }
            }
            if(windowSum == k){
                int length = high - low + 1;
                int a = nums.size()-length;
                minlen = min(minlen , a);
            }
        }

        return minlen == INT_MAX ? -1 : minlen;
    }
};