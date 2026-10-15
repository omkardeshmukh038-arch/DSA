class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

        for(int i=0;i<nums.size();i++){
            nums[i] = nums[i]*nums[i];
        }

        // for(int i=0;i<nums.size();i++){
        //     int minimum = i;
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[minimum] > nums[j]){
        //             minimum = j;
        //         }
        //     }
        //     swap(nums[i],nums[minimum]);
        // }
        sort(nums.begin(),nums.end());

        long long score = 0;
        int i=0;
        int low = 0;
        int high = nums.size()-1;
        while(i<nums.size()){
            if(i == 0){
                score = score + nums[high];
                high--;
            }

            else if(i%2 == 0){
                score = score + nums[high];
                high--;
            }

            else{
                score = score - nums[low];
                low++;

            }
            i++;
        }
        return score;
    }
};