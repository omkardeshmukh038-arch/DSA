class Solution {
public:
    bool ans(int x,int &result){
        if(x == 0){
            return true;
        }
        
        int remainder = x % 10;
        if (result > INT_MAX / 10 ||
            (result == INT_MAX / 10 && remainder > 7) ||
            result < INT_MIN / 10 ||
            (result == INT_MIN / 10 && remainder < -8)) {
            return false;
        }
        
        result = result * 10 + remainder;

        return ans(x/10,result);
    }
    int reverse(int x) {
        int result = 0;
        if(!ans(x,result)){
            return 0;
        }
        return result;
    }
};