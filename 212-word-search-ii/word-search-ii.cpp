class trienode {
public:
    bool isword;
    trienode* arr[26] ;

    trienode() {
        for (int i = 0; i < 26; i++) {
            arr[i] = nullptr;
        }
        isword = false ;
    }
};

class Solution {
public:
    vector<string> findWords(vector<vector<char>>& board,
                             vector<string>& words) {
        // if we use the logic that we use in word search then we will get TLE
        // cuz of the lage board and word length

        // create a trie with each alphabet having its neighbours in its node!!

        for (int i = 0; i < words.size(); i++) {
            insert(words[i]);
        }
        int r = board.size();
        int c = board[0].size();
        vector<string> res;
        trienode* node = root ;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                search(board, i, j, r, c,node, "", res);
            }
        }
        return res ;
    }

private:
    trienode* root = new trienode();

    void insert(string s) {
        trienode* node = root;
        int curr ;

        for (int i =0;i<s.size();i++) {
            curr = s[i] - 'a';

            if (node->arr[curr] == nullptr) {
                node->arr[curr] = new trienode();
            }
            node = node->arr[curr];
        }
        node->isword = true;
    }

    void search(vector<vector<char>>& b, int i, int j, int r, int c,trienode* node, string w,
                vector<string> &res){
                    if(i <0 || i>=r || j<0 || j>=c || b[i][j] == '#'){
                        return ;
                    }
                    char ch = b[i][j] ;

                    node= node->arr[ch-'a'] ;
                    if(node == nullptr){
                        return ;
                    }
                    w += b[i][j] ;
                    if(node->isword){
                        res.push_back(w) ;
                        node->isword = false ;
                    }
                    b[i][j] = '#' ;

                    search(b,i-1,j,r,c,node,w,res) ;
                    search(b,i+1,j,r,c,node,w,res) ;
                    search(b,i,j-1,r,c,node,w,res) ;
                    search(b,i,j+1,r,c,node,w,res) ;

                    b[i][j] = ch ;
                }
};