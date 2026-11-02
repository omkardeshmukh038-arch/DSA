class Solution {
public:
    bool isVowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' ||ch == 'o' || 
        ch == 'u' ||ch == 'A' || ch == 'E' || ch == 'I' ||
        ch == 'O' || ch == 'U');
         
    }
    string reverseVowels(string s) {
        int low = 0;
        int high = s.length() - 1;

        while(low < high) {
            if(isVowel(s[low]) && isVowel(s[high])) {
                swap(s[low], s[high]);
                low++;
                high--;
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