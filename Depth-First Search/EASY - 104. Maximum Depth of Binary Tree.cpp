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
    void dfs(TreeNode* root,int ans , int &ma){
        if(root){ ans++;ma=max(ma,ans); 
        dfs(root->left,ans,ma);
        dfs(root->right,ans,ma);}
    }
    int maxDepth(TreeNode* root) {
        int ma = 0 ;
        dfs(root,0,ma);
        return ma ;
    }
};
