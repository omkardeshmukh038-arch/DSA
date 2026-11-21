class Solution {
public:
    string longestPalindrome(string s) {
        
        int st = 0;
        int maxlen = INT_MIN;

        for(int i=0; i<s.length(); i++){

            int low = i;
            int high = i;
            while(low >= 0 && high < s.length() && s[low]==s[high]){
                
                if(high - low + 1 > maxlen){
                    st = low;
                    maxlen = high - low + 1;
                }
                low--;
                high++;
            }

            low = i;
            high = i+1;
            while(low >=0 && high < s.length() && s[low] == s[high]){

                if( high - low + 1 > maxlen){
                    st = low;
                    maxlen = high - low + 1;
                }
                low--;
                high++;
            }
        }
        return s.substr(st,maxlen);
    }
};