class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        int low = 0;
        int high = 0;
        int result = INT_MIN;
        while(high < s.length()){
            m[s[high]]++;
            int len = high - low + 1;
            
            
            while(m.size() < len){
                m[s[low]]--;
                if(m[s[low]] == 0){
                    m.erase(s[low]);
                }
                low++;
                len = high - low + 1;
            }
            result = max(result,len);
            high++;
        }
        return result == INT_MIN ? 0 : result;
    }
};