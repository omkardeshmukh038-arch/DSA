class Solution {
public:
    int characterReplacement(string s, int k) {
        int low = 0;
        int result = INT_MIN;
        int maxfreq = 0;
        vector<int> a(26);

        for(int high = 0; high < s.length(); high++){
            a[s[high] - 'A']++;
            maxfreq = max(maxfreq , a[s[high]-'A']);
            int windowSize = high - low + 1;
            int replacements = windowSize - maxfreq;
            while(replacements > k){
                a[s[low]-'A']--;
                low++;
                windowSize = high - low + 1;
                replacements = windowSize - maxfreq;
            }
            result = max(result , windowSize);
        }
        return result == INT_MIN ? 0 : result;

    }
};