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
    vector<vector<int>> level ;
    int findBottomLeftValue(TreeNode* root) {
        //create level order and return first value of last row
        levelorder(root) ;
        return level[level.size()-1][0] ;
    }

    void levelorder(TreeNode* root){
        queue<TreeNode* > q ;
        q.emplace(root) ;

        while(!q.empty()){
            if(!root){
                return ;
            }
            int count = q.size() ;
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
            level.push_back(r) ;
        }
    }
};