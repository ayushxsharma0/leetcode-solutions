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
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0 ;
        dfs(root,res) ;
        return res ;
    }

private: 
    int dfs(TreeNode* p, int &res){
        if(!p) return 0 ;

        int r = dfs(p->right,res) ;

        int l = dfs(p->left,res) ;

        res = max(res,r+l) ;

        return 1 + max(r,l) ;
    }
};