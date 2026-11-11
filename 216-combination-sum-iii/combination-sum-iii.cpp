class Solution {
public:
    void combination(int k, int n,vector<vector<int>>&ans, int sum , vector<int> ds,int i){
        
        if(sum == n && ds.size() == k){
            ans.push_back(ds);
            return;
        }
        if(i > 9){
            return;
        }
        if(ds.size() > k || sum > n){
            return;
        }
        ds.push_back(i);
        sum += i;
        combination(k,n,ans,sum,ds,i+1);
        ds.pop_back();
        sum -= i;
        combination(k,n,ans,sum,ds,i+1);

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds;
        combination(k,n,ans,0,ds,1);

        return ans;
    }
};