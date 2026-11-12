class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int len = 1;
        int maxans = 1;
        int minans = 1;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] < nums[i+1]){
                len++;
                maxans = max(maxans,len);
            }else{
                len = 1;
            }
        }
        
        len = 1;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] > nums[i+1]){
                len++;
                minans = max(minans,len);
            }else{
                len = 1;
            }
        }

        return max(minans,maxans);
    }
};