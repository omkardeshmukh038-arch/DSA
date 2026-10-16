class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mp;


        int left=0;
        int right=0;
        int length = 0;
        int maxlen = INT_MIN;
        while(right<s.length()){
            mp[s[right]]++;
            while(mp[s[right]] > 1){
                mp[s[left]]--;
                left++;
            }
            length = right-left+1;
            
            maxlen = max(maxlen,length);
            right++;
        }
        return maxlen == INT_MIN ? 0 : maxlen;
    }
};