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
    int preidx = 0 ;
    int idx(vector<int> v, int s, int e, int d){
        for(int i = s;i<=e;i++){
            if(v[i] == d){
                return i ;
            }
        }
        return -1 ;
    }
    TreeNode* helper(vector<int> pre, vector<int> in, int istart, int iend){
        if(istart > iend) return nullptr ;

        TreeNode * node = new TreeNode ;
        node->val = pre[preidx++] ;

        if(istart == iend){
            return node ;
        }

        int splitidx = idx(in,istart,iend,node->val) ;
        node->left = helper(pre,in,istart,splitidx-1) ;
        node->right = helper(pre,in,splitidx+1,iend) ;

        return node ;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder,inorder,0,inorder.size()-1) ;
    }
};