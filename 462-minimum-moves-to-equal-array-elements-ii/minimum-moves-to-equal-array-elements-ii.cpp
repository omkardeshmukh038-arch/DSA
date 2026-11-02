class Solution {
public:
    int minMoves2(vector<int>& nums) {
        if(nums.size() == 1){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int n = nums[nums.size()/2];

        int moves = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == n){
                continue;
            }
            moves += abs(nums[i] - n);
            
        }


        return moves;
    }
};