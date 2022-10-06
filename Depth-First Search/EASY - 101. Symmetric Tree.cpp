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

    bool check(TreeNode* left, TreeNode* right){
        if(!left && !right) return true;
        else if((left && !right) || (!left && right)) return false;
        else{
            if(left->val != right->val) return false;
            return (check(left->left,right->right) && check(left->right, right->left));
        }
    }
    
    bool isSymmetric(TreeNode* root) {
        if(!root->left && !root->right) return true;
        return check(root->left, root->right);
    }
};
/*
 1 2 3 5 6 4 6 5
 1 2 3 5 6 4 6 5

 


*/