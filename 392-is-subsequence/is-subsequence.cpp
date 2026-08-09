class Solution {
public:
    bool isSubsequence(string s, string t) {
        string p = "";

        int i=0; 
        int j=0;
        while(i<s.length() && j<t.length()){
            if(s[i] == t[j]){
                p.push_back(s[i]);
                i++;
            }
            
            j++;
        }
        if(p == s){
            return true;
        }else{
            return false;
        }
    }
};