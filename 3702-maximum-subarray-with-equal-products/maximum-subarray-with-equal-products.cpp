class Solution {
public:
    int maxLength(vector<int>& nums) {
        int low = 0;
        long long g = 0;
        long long l = 1;
        long long product = 1;
        int length = INT_MIN;
        for(int high =0; high<nums.size(); high++){
            g = 0;
            l = 1;
            product = 1;
            for(int i = low; i<= high; i++){
                g = gcd(g,nums[i]);
                l = lcm(l,nums[i]);
                product *= nums[i];
            }
            if(product == l*g){
                length = max(length , high-low+1);
            }
            while(product > (l * g)){
                product /= nums[low];
                low++;
                if(low > high){
                    break;
                }
            }
        }
        return length;
    }

    
};