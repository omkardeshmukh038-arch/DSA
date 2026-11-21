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
    bool order(TreeNode* temp1, TreeNode* temp2){
        if(temp1 == nullptr && temp2 ==nullptr){
            return true;
        }
        if(temp1 == nullptr || temp2 == nullptr){
            return false;
        }

        
        if(temp1->val != temp2->val){
            return false;
        }
        return order(temp1->left,temp2->left) && order(temp1->right,temp2->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return order(p,q);
    }
};