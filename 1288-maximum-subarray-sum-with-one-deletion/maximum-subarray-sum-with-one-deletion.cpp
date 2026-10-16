class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int no_del = arr[0];
        int one_del = 0;
        int maxSum = arr[0];
        for(int i= 1; i<arr.size(); i++){
            one_del = max(no_del,one_del+arr[i]);
            no_del = max(arr[i],no_del+arr[i]);
            maxSum = max(maxSum,max(no_del,one_del));
        }
        return maxSum;
    }
};