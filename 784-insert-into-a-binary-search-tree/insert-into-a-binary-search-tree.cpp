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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root){
            root = new TreeNode ;
            root->left = root->right = nullptr ;
            root->val = val ;
            return root ;
        }
        TreeNode* p = root ;
        TreeNode* q ;

        while(p!=nullptr){
            q = p ;
            if(val > p->val){
                p = p->right ;
            }
            else{
                p = p->left ;
            }
        }
        TreeNode* dum = new TreeNode ;
        dum->val = val ;
        dum->right = dum->left = nullptr ;
        if(val > q->val){
            q->right = dum ;
        }else{
            q->left = dum ;
        }
        return root ;
    }
};