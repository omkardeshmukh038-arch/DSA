class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum > (num*9)){
            return "";
        }
        int length = num;
        string ans = "";
        while(num != 0){
            int curr = min(9,sum);
            ans += to_string(curr);

            sum -= curr;
            num--;

        }
        return ans;
    }
};