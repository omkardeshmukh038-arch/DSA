class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(int i=0; i<s.length(); i++){
            if( ((65 <= s[i] && s[i] <=  90) || (97 <= s[i] && s[i] <= 122)) || (s[i] >= '0' && s[i] <= '9') ){
                ans.push_back(s[i]);
            }
        }

        transform(ans.begin(),ans.end(),ans.begin(),::tolower);
        string result = ans;

        reverse(ans.begin(),ans.end());
        string ans1 = ans;

        if(result == ans1){
            return true;
        }
        return false;
    }
};