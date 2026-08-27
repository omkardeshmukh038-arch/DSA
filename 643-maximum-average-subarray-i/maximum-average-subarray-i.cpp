class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        for(int i=0; i<k; i++){
            sum +=nums[i];
        }

        int low = 0;
        int high = k-1;
        double avg = -DBL_MAX;
        double a = 0;

        while(high < nums.size()){
            a = sum / k;
            avg = max(a,avg);
            sum = sum - nums[low];
            high++,low++;
            if(high == nums.size()){
                break;
            }
            sum = sum + nums[high];
        }

        return avg;
    }
};