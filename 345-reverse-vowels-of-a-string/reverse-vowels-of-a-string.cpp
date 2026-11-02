class Solution {
public:
    string reverseVowels(string s) {
        int low = 0;
        int high = s.length()-1;
        while(low < high){
            if((s[low] == 'A' || s[low] == 'a' || s[low] == 'E' || s[low] == 'e' || s[low] == 'i' || s[low] == 'I' || s[low] == 'o' || s[low] == 'O' || s[low] == 'U' || s[low] == 'u') && (s[high] == 'A' || s[high] == 'a' || s[high] == 'E' || s[high] == 'e' || s[high] == 'i' || s[high] == 'I' || s[high] == 'o' || s[high] == 'O' || s[high] == 'U' || s[high] == 'u')){
                swap(s[low] , s[high]);
                high--;
                low++;
                
            }else if((s[low] == 'A' || s[low] == 'a' || s[low] == 'E' || s[low] == 'e' || s[low] == 'i' || s[low] == 'I' || s[low] == 'o' || s[low] == 'O' || s[low] == 'U' || s[low] == 'u')){
                high--;;
            }else{
                low++;
            }
            
        }

        return s;
    }
};