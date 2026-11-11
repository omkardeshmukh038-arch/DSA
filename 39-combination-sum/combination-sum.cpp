class Solution {
public:
    void getAllCombinations(vector<int> &arr,int tar, int indx, vector<vector<int>>&ans , vector<int> &combin,int sum){
        if(sum == tar){
            ans.push_back(combin);
            return;
        }
        if(indx == arr.size() || sum > tar){
            return;
        }
        combin.push_back(arr[indx]);
        sum += arr[indx];
        getAllCombinations(arr,tar,indx,ans,combin,sum);
        combin.pop_back();
        sum -= arr[indx];
        getAllCombinations(arr,tar,indx+1,ans,combin,sum);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int tar) {
        vector<vector<int>> ans;
        vector<int> combin;

        getAllCombinations(arr,tar,0,ans,combin,0);

        return ans;

    }
};