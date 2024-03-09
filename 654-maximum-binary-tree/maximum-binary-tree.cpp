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
    private:
    // first simply we find the maximum value index 
    int Largest(vector<int>&nums,int low,int high){
        int maxi  = INT_MIN;
        int ind = -1;
        // st a loop for low to high 
        for( int i=low;i<=high; i++){
            // if any element is greater than the element then update it
            if(nums[i]>maxi){
               maxi  = nums[i];
               // update the index
               ind=i;
            }
        }
        // return the index
        return ind;
    }
    //building the new maximum build tree
    TreeNode*buildTree(vector<int>&nums,int low ,int high){
        if(low>high){
            return NULL;
        }
        // finding the position of the maximum val
        int pos = Largest(nums,low,high);
        // new root
        TreeNode*root = new TreeNode(nums[pos]);
        //left call for the left subtree
        root->left= buildTree(nums,low,pos-1);
        // right call for the right subtree
        root->right = buildTree(nums,pos+1,high);
        return root;
        
 }
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        TreeNode*ans = buildTree(nums,low,high);
        return ans;
    }
};