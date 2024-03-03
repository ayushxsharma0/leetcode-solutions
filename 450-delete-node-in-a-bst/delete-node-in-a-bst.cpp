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
    TreeNode* deleteNode(TreeNode* root, int key) {
        //replace the node with its inorder predecessor
        //first search for the key
        if(!root) return nullptr ;
        TreeNode *p = root ;
        
            if(key > root->val){
                root->right = deleteNode(root->right,key) ;
            }
            else if(key < root->val){
                root->left = deleteNode(root->left,key) ;
            }
            else{
                if(!root->left) return root->right ;
                else if(!root->right) return root->left ;
                TreeNode* dum = inpred(root->left) ;
                root->val = dum->val ;
                root->left = deleteNode(root->left,dum->val) ;
            }
        
        return root ;
    }
private:
    TreeNode* inpred(TreeNode* p){
    
        TreeNode* q = p ;
        while(p){
            q= p ;
            p = p->right ;
        }
        return q ;
    }
};