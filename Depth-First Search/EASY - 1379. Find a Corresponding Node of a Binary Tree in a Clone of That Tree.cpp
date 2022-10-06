/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(cloned->val==target->val) return cloned;
        TreeNode* ansl=NULL, *ansr=NULL;
        if(cloned->left)  ansr = getTargetCopy(original,cloned->left,target) ;
        if(cloned->right) ansl = getTargetCopy(original,cloned->right,target) ;
        return ansr?ansr:ansl ;
    }
};
