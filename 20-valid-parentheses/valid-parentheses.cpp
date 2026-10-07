class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        char a = '(';
        char b = '[';
        char c = '{';
        char d = ')';
        char e = ']';
        char f = '}';

        for(int i=0; i<s.length(); i++){

            if(st.empty() && (s[i] == d || s[i] == e || s[i] == f)){
                return false;
            } 
            
            if(s[i] == a || s[i] == b || s[i] == c){
                st.push(s[i]);
            }else{
                if((s[i] == d) && (st.top() == a)){
                    st.pop();
                }else if((s[i] == e) && (st.top() == b)){
                    st.pop();
                }else if((s[i] == f) && (st.top() == c)){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            
        }

        if(st.empty()){
            return true;
        }

        return false;


    }
};