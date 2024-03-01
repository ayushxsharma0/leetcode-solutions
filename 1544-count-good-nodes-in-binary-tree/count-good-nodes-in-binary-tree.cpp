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
    int goodNodes(TreeNode* root) {
        if(!root) return 0 ;
        int maxtillnow = root->val ;
        int ans=0 ;
        dfs(root->right,maxtillnow,ans) ;
        dfs(root->left,maxtillnow,ans) ;
        return ans +1;
    }

    void dfs(TreeNode* p, int maxxy,int &ans){
        if(!p){
            return ;
        }
        if(p->val >= maxxy){
            ans++ ;
            maxxy = p->val ;
        }
        dfs(p->left,maxxy,ans) ;
        dfs(p->right,maxxy,ans) ;
    }
};