class node{
    public :
        bool isword;
        node* child[26] ;

        node(){
            isword = false ;
            for(auto &i : child){
                i = nullptr ;
            }
        }
};
class WordDictionary {
public:
    node* root ;
    WordDictionary() {
        root = new node() ;
    }
    
    void addWord(string word) {
        node* p = root ;
        for(auto i : word){
            int c = i-'a' ;
            if(!p->child[c]){
                p->child[c] = new node() ;
            }
            p=p->child[c] ;
        }
        p->isword = true ;
    }
    
    bool search(string word) {
        node * p = root ;
        return searchword(p,0,word) ;
    }

    bool searchword(node* p, int i, string &word){
        if(p == nullptr){
            return false ;
        }
        if(i== word.size()){
            return p->isword ;
        }
        if(word[i] != '.'){
            return searchword(p->child[word[i]-'a'],i+1,word) ;
        }
        for (int j = 0; j < 26; j++) {
            if (searchword(p->child[j],i+1,word)) {
                return true;
            }
        }
        return false;
    } 
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */