/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dep(int ans , TreeNode* root,int &count){
        if(root == NULL){
            count = max(count,ans);
            
            return;
        }
        ans++;
        dep(ans,root->left,count);
        
        dep(ans,root->right,count);
        ans--;
        
        return;
    }
    int maxDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int count = 0;
        dep(0,root,count);

        return count;
    }
};