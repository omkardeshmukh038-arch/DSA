class Solution {
public:
    bool checkString(string s) {
        char appear = s[0];
        for(int i=1; i<s.length(); i++){
            if(appear < s[i]){
                appear = s[i];
                continue;
            }else if(appear == s[i]){
                continue;
            }else{
                return false;
            }
        }

        return true;
    }
};