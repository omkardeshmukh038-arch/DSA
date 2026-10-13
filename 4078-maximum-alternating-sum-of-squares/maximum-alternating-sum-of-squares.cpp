class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

        
        for(int i=0; i<nums.size(); i++){
            nums[i] = nums[i]*nums[i];
        }
        long long sum = 0;
        sort(nums.begin(),nums.end());

        int i = 0;
        int j = nums.size()-1;


        for(int k=0; k<nums.size(); k++){
            if((k+1)%2 == 0){
                sum -= nums[i];
                i++;
            }else{
                sum += nums[j];
                j--;
            }
        }

        return sum;


        
    }
};