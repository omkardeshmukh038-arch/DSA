class Solution {
public:
    void func(int n,string n1,vector<string> &ans,int open,int close){
        if(n1.length() == n*2){
            ans.push_back(n1);
            return;
        }
        if(open < n){
            open++;
            n1.push_back('(');
            func(n,n1,ans,open,close);
            n1.pop_back();
            open--;
        
        }
        if(close < open){
            close++;
            n1.push_back(')');
            func(n,n1,ans,open,close);
            n1.pop_back();
            close--;
        }
    }
    vector<string> generateParenthesis(int n) {
        string n1 = "";
        vector<string> ans;
        func(n,n1,ans,0,0);

        return ans;
        
    }
};