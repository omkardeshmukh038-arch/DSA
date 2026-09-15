class Solution {
public:
    bool isPalindrome(string s) {
        string result = s;
        string ans;
        transform(result.begin(),result.end(),result.begin(),::tolower);
        for(int i =0; i<result.length(); i++){
            if( (result[i] >= 48 && result[i] <= 57) ||(result[i] >= 97 && result[i] <= 122)){
                ans.push_back(result[i]);
            }
        }
        string ans1 = ans;
        reverse(ans.begin(), ans.end());

        return ans1==ans;
        
    }
};