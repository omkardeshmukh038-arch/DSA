class Solution {
public:
    int trap(vector<int>& height) {
        int count = 0;
        int leftMax = INT_MIN;
        int rightMax = INT_MIN;

        int i = 0;
        int j = height.size()-1;

        while(i<j){
    
            if(height[i] < height[j]){
                leftMax = max(leftMax,height[i]);
                count += (leftMax - height[i]);
                i++;
            }else{
                rightMax = max(rightMax,height[j]);
                count += rightMax - height[j];
                j--;
            }
        }

        return count;
        
    }
};