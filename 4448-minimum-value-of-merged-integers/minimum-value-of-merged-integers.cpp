class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int i = 0;
        int j = 1;
        int minValue = INT_MAX;
        while(j<nums.size()){
            int n1 = nums[i];
            int n2 = nums[j];

            int temp = n2;
            int multi = 1;
            while(temp > 0){
                multi *= 10;
                temp /= 10;
            }

            int ans = n1*multi + n2;

            minValue = min(minValue,ans);
            i += 2;
            j += 2;


        }

        return minValue;
        
    }
};