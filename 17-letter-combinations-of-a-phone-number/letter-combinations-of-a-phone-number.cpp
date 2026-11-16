class Solution {
public:
    void func(string &digits , int n , int i , string &ds , vector<string> &ans, unordered_map<char,string> &mp){

        if(i == n){
            ans.push_back(ds);
            return;
        }
        

        for(int j=0; j<mp[digits[i]].size(); j++){
            ds.push_back(mp[digits[i]][j]);
            func(digits,n,i+1,ds,ans,mp);
            ds.pop_back();
        }

        return;

    }
    vector<string> letterCombinations(string digits) {

        unordered_map<char, string> mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        vector<string> ans;
        string ds = "";
        int n = digits.size();

        func(digits,n,0,ds,ans,mp);

        return ans;

        
    }
};