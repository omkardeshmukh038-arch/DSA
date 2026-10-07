class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> posi;
        vector<int> nega;
        vector<int> ans;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0){
                posi.push_back(nums[i]);
            }else{
                nega.push_back(nums[i]);
            }
        }

        int i=0;
        int j=0;

        while((i < nums.size()/2) && j < nums.size()/2){
            ans.push_back(posi[i]);
            ans.push_back(nega[i]);
            i++;
            j++;
        }
        return ans;
    }
};