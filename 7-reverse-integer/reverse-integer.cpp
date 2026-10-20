class Solution {
public:
    int reverse(int x) {
        int remainder;
        int ans= 0;

        while(x != 0){
            remainder = x % 10;
                        if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && remainder > 7)) {
                return 0;
            }

            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && remainder < -8)) {
                return 0;
            }
            ans = ans * 10 + remainder;
            x = x / 10;
        }

        return ans;
        
    }
};