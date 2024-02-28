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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q ;
        vector<vector<int>> ans ;
        if(!root) return ans ;
        q.emplace(root) ;
        while(!q.empty()){
            int count = q.size() ;   //gives the number of element needed in that sub vector
            vector<int> r ;
            for(int i =0;i<count;i++){
                TreeNode* p = q.front() ;
                q.pop() ;

            
                r.push_back(p->val) ;
                if(p->left){
                    q.emplace(p->left) ;
                }
                if(p->right){
                    q.emplace(p->right) ;
                }
            }
            ans.push_back(r) ;
        }
        return ans ;
    }
};