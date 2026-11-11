class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int i = 0, j = 0, k = 0, l = 0;
        int n = nums1.size();
        int count = 0;

        map<int,int> mp;
        for(int i=0;i<n; i++){
            for(int j=0; j<n; j++){
                int sum = nums1[i]+nums2[j];
                mp[sum]++;
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int sum = nums3[i]+nums4[j];

                if(mp.find(-sum) != mp.end()){
                    count += mp[-sum];
                }
            }
        }
        return count;
        
    }
};