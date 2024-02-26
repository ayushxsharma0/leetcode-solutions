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
    vector<int> v ;
    void inorder(TreeNode *p){
        stack<TreeNode*> stk ;
        while(p || !stk.empty()){
            if(p){
                stk.emplace(p) ;
                p=p->left ;
            }
            else{
                p = stk.top() ;
                stk.pop() ;
                v.push_back(p->val) ;
                p = p->right ;
            }
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root) ;

        return v[k-1] ;
    }
};