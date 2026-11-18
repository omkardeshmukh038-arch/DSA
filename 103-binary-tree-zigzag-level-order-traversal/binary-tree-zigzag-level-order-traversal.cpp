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
    void order(vector<vector<int>>&result , TreeNode* root){
        if(root == nullptr){
            return;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool lefttoright = true;
        while(!q.empty()){
            int n = q.size();
            vector<int> temp;
            if(lefttoright){
                while(n--){
                    TreeNode* t = q.front();
                    temp.push_back(t->val);
                    q.pop();
                    
                    if(t->left != NULL){
                        q.push(t->left);
                    }
                    if(t->right != NULL){
                        q.push(t->right);
                    }
                }
                lefttoright = false;

            }else{
                while(n--){
                    TreeNode* t = q.front();
                    temp.push_back(t->val);
                    q.pop();
                    
                    if(t->left != NULL){
                        q.push(t->left);
                    }
                    if(t->right != NULL){
                        q.push(t->right);
                    }
                }
                reverse(temp.begin(),temp.end());
                lefttoright = true;

            }
            
            result.push_back(temp);
        }
        return;
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;

        order(result,root);

        return result;
    }
};