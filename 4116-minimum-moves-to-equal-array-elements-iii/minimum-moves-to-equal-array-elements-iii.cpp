class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums[nums.size()-1];
        int moves = 0;

        for(int i=0; i <nums.size(); i++){
            moves += abs(n - nums[i]);
        }

        return moves;
        
    }
};