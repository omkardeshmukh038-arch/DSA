class Solution {
public:

    vector<int> createRows(int n){
        vector<int> ans1;
        long long ans = 1;

        ans1.push_back(ans);

        for(int i=0; i<n; i++){
            ans = ans*(n-i)/(i+1);
            ans1.push_back(ans);
        }
        return ans1;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pushk;
        for(int i=0; i<numRows; i++){
            pushk.push_back(createRows(i));
        }
        return pushk;
    }
};