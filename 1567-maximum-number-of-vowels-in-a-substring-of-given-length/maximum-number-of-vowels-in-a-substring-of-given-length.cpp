class Solution {
public:
    bool isVowel(char c){
         return c == 'a'|| c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {
        int low = 0;
        int high = k;
        int count = 0;
        int result = INT_MIN;

        for(int i=0; i<k; i++){
            if(isVowel(s[i])){
                count++;
            }
        }
        result = count;

        while(high < s.length()){
            if(isVowel(s[high])){
                count++;
            }
            if(isVowel(s[low])){
                count--;
            }
            low++;
            high++;

            result = max(result , count);
        } 
        

        return result == INT_MIN ? 0 : result;
    }
};