class Solution {
public:
    bool uniqueOccurrences(vector<int>& nums) {
        map<int,int> mp1;
        map<int,int> mp2;
        for(int i=0; i<nums.size(); i++){
            mp1[nums[i]]++;

        }

        for(auto it : mp1){
            mp2[it.second]++;
        }

        for(auto it : mp2){
            if(it.second > 1){
                return false;
            }
        }

        return true;
    }
};