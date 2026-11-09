class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        map<int,int> mp;
        int maxele = INT_MIN;
        long long count = 0;
        int j = 0;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
            
            while(mp.rbegin()->first - mp.begin()->first > 2){
                mp[nums[j]]--;

                if(mp[nums[j]] == 0){
                    mp.erase(nums[j]);
                }

                j++;
            }

            count += i - j + 1;

        }

        return count;
    }
};