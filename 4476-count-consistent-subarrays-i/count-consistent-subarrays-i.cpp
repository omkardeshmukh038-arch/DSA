class Solution {
public:
    int countConsistent(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        
        if(nums.size() == 1){
            return 1;
        }
        int count = 0;

        for(int i=0; i<nums.size(); i++){
            int val = nums[i];
            int minval = nums[i];

            for(int j=i; j<nums.size(); j++){
                minval = min(minval, nums[j]);
                val = val & nums[j];

                if(val == minval){
                    count++;
                }
            }
        }
        return count;
    }
};