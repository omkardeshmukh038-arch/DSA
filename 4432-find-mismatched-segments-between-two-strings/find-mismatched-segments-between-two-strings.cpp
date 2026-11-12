class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> ans;

        vector<string> nums1;
        string p1 = "";
        string p2 = "";
        for(int i=0; i<s1.length(); i++){
            if(s1[i] != s2[i]){
                p1 += s1[i];
                p2 += s2[i];
            }else{
               if(p1.length() > 0){
                    nums1.push_back(p1);
                    nums1.push_back(p2);
                    ans.push_back(nums1);
                    p1 = "";
                    p2 = "";
                    nums1.pop_back();
                    nums1.pop_back();
                }
            }
                
            
        }
        if(p1.length() > 0){
                    nums1.push_back(p1);
                    nums1.push_back(p2);
                    ans.push_back(nums1);
                    p1 = "";
                    p2 = "";
                    nums1.pop_back();
                    nums1.pop_back();
        }

        return ans;

        
    }
};