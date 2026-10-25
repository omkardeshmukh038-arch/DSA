class Solution {
public:
    string multiply(string num1, string num2) {
        vector<int> ans(num1.size()+num2.size(),0);
        if (num1 == "0" || num2 == "0") {
            return "0";
        }
        for(int i=num1.size()-1; i>=0; i--){

            for(int j=num2.size()-1; j>=0; j--){
                int digit1 = num1[i] - '0';
                int digit2 = num2[j] - '0';

                int remainder = digit1*digit2 + ans[i+j+1];
                ans[i+j+1] = remainder % 10;
                ans[i+j] += remainder /  10;
            } 
            
        }
        string result = "";
        for(int x : ans){
            if(!(result.empty() && x == 0)){
                result += (x + '0');
            }
        }

        return result;
        
    }
};