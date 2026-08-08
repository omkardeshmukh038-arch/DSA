class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long maxi = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){

                int g = gcd(nums[i],nums[j]);

                long long a = (1LL*nums[i] * nums[j])/(1LL*g*g);

                maxi = max(maxi,a);

            } 
        }
        return maxi;
    }
};