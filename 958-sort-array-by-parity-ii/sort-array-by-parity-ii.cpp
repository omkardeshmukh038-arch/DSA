class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] % 2 == 0){
                even.push_back(nums[i]);
            }else{
                odd.push_back(nums[i]);
            }
        }

        int i=0;
        int j=0;
        vector<int> ans;
        for(int k=0; k<nums.size(); k++){
            if((k+1) % 2 != 0){
                ans.push_back(even[i]);
                i++;
            }else{
                ans.push_back(odd[j]);
                j++;
            }
        }

        return ans;
    }
};