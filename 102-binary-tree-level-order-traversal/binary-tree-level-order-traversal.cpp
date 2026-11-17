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
    void order(vector<vector<int>> &result, TreeNode* root){
        if(root == nullptr){
            return;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int> temp;
            while(n != 0){
                TreeNode* t = q.front();
                q.pop();
                temp.push_back(t->val);
                if(t->left != NULL){
                    q.push(t->left);
                }
                if(t->right != NULL){
                    q.push(t->right);
                }
                n--;
            }
            result.push_back(temp);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;

        order(result,root);

        return result;
        
    }
};