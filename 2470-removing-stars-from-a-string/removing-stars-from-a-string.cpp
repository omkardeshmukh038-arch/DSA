class Solution {
public:
    string removeStars(string s) {
        stack<int> st;
        int count = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i] != '*'){
                st.push(s[i]);
                count = 0;

            }else{
                st.pop();
            }
        }

        
        string ans ="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};