class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int i=0; i<nums.size() ; i++){
            s.insert(nums[i]);
        }
        int longest = 0;
        for(auto x : s){
            int count = 1;
            if(s.find(x-1) == s.end()){
                while(s.find(x+1) != s.end()){
                    x = x+1;
                    count++;
                }
            }
            longest = max(longest,count);
        }
        return longest;

    }
};