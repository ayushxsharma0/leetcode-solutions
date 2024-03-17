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
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN ;
        dfs(root,res) ;

        return res ;
    }

private: 
    int dfs(TreeNode* p, int &res){
        if(!p) return 0 ;

        int l = max(dfs(p->left,res),0) ;
        int r = max(dfs(p->right,res),0) ;

        //path sum from the current node
        res = max(res, l+r+p->val) ;

        return p->val + max(r,l) ;
    }
};