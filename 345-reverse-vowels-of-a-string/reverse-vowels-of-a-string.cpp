class Solution {
public:
    bool isVowel(char ch) {
        if(ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U'){
            return true;
        }

        return false;
    }
    string reverseVowels(string s) {
        int low = 0;
        int high = s.length() - 1;

        while(low < high) {
            if(isVowel(s[low]) && isVowel(s[high])) {
                swap(s[low], s[high]);
                low++;
                high--;
                continue;
            }
            else if(isVowel(s[low])) {
                high--;
            }
            else {
                low++;
            }
        }
        return s;
    }
};