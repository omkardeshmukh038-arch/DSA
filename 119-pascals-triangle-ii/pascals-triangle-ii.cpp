class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result;
        long long res = 1;
        result.push_back(res);
        for(int i =0; i<rowIndex; i++){
            res = res * (rowIndex-i)/(i+1);
            // res = res / (i+1);
            result.push_back(res);
        }
        return result;
    }
};