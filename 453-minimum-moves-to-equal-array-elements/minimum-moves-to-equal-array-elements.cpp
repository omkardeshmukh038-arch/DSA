class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums[0];
        int moves = 0;

        for(int i=0; i<nums.size(); i++){
            
            if(nums[i] == n){
                continue;
            }

            moves += ( abs(nums[i] - n));

        }

        return moves;
        
    }
};