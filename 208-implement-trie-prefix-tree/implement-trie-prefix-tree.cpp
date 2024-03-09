class node{
    public:

    
        bool isword;
        node* arr[26] ;
    
    node(){
        isword = false;
        for (auto &a : arr) a = nullptr;
    }  
};

class Trie {
public:
    node* root ;
    Trie() {
       root = new node() ; 
    }
    
    void insert(string word) {
        node* p = root ;
        for(auto &c : word){
           if(!p->arr[c-'a']){
               p->arr[c-'a'] = new node() ;
           }
            p = p->arr[c-'a'] ;
        }
        p->isword = true ;
    }
    
    bool search(string word) {
        node* p = root ;
        for(auto &c : word){
            if(p->arr[c-'a']== nullptr){
                return false ;
            }
            p=p->arr[c-'a'] ;
        }
        return p->isword ;
    }
    
    bool startsWith(string prefix) {
        node* p = root ;
        for(auto &c : prefix){
            if(p->arr[c-'a']== nullptr){
                return false ;
            }
            p=p->arr[c-'a'] ;
        }
        return true ;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */