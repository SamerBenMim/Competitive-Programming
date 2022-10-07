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
    bool dfs(TreeNode* root, int targetSum,int sum){
        
        if(!root)return false;
        cout<<root->val<<" "<<sum<<endl;
        if(!root->left&&!root->right&&sum+root->val==targetSum)return true;
        return dfs(root->right,targetSum,sum+root->val)||dfs(root->left,targetSum,sum+root->val);

        return false; 
    
    
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return dfs(root,targetSum,0);
    }
};