/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    void preorder(TreeNode* p, string& s) {
        if (p) {
            s += to_string(p->val);
            s += ',';
            preorder(p->left, s);
            preorder(p->right, s);
        } else {
            s += "N,";
            return;
        }
    }

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s = "";
        preorder(root, s);

        // cout << s;
        return s;
    }

    TreeNode * buildTree(stringstream &ss)
    {
        string token;
        getline(ss, token, ',');
        
        if(token == "N") {
            return nullptr;
        }
        TreeNode *n = new TreeNode(stoi(token));
        n->left = buildTree(ss);
        n->right = buildTree(ss);
        return n;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        // create a node push it into stack, if encounter null pop from stack
        // and create its left node
        string token;
        stringstream ss(data);
                
        TreeNode *root =  buildTree(ss);
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));