class Solution {
public:
    string reverseStr(string s, int k) {
        if(s.length() <= k){
            reverse(s.begin(),s.end());
            return s; 
        }
        int low = 0;
        for(int i=k-1; i<s.length(); i+=k*2){
            reverse(s.begin()+low,s.begin()+i+1);
            low += k*2;
        }
        if(low < s.length()){
            reverse(s.begin()+low,s.end());
        }

        return s;
    }
};