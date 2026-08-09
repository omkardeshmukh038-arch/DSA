class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int result_sum = 0;
        int max_diff = INT_MAX;

        for(int curr=0; curr<nums.size()-2; curr++){

            int left = curr+1;
            int right = nums.size()-1;
            while(left < right){
                int sum = nums[curr]+nums[left]+nums[right];

                if(sum == target){
                    return sum;
                }else if(sum < target){
                    int diff = abs(sum - target);
                    if(diff < max_diff){
                        max_diff = diff;
                        result_sum = sum;
                    }
                    left++;
                }else{
                    int diff = abs(sum - target);
                    if(diff < max_diff){
                        max_diff = diff;
                        result_sum = sum;
                    }
                    right--;
                }
            }
        }
        return result_sum;
    }
};