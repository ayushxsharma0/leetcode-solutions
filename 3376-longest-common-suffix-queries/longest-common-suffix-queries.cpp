class node{
public:
    int idx ;
    node* arr[26] ;
    node(int idn){
        idx = idn ;
        for(int i = 0;i<26;i++){
            arr[i] = nullptr ;
        }
    }
};

class Solution {
public:
    vector<int> stringIndices(vector<string>& wordsContainer, vector<string>& wordsQuery) {
        int n = wordsContainer.size() ;
        vector<int> ans ;

        node* head = new node(0) ;

        for(int i = 0;i<n;i++){
            if(wordsContainer[head->idx].size() > wordsContainer[i].size()){
                head->idx = i ;
            }
            add(head,wordsContainer,i) ;
        }
        for(auto c : wordsQuery){
            ans.push_back(search(head,c)) ;
        }
        return ans ;
    }
    void add(node* ptr, vector<string>&words, int i){
        for(int j = words[i].size()-1;j>=0;j--){
            int c= words[i][j] - 'a' ;
            if(!ptr->arr[c]){
                ptr->arr[c] = new node(i) ;
            }
            ptr = ptr->arr[c] ;
            if(words[ptr->idx].size() > words[i].size()){
                ptr->idx = i ;
            }
        }
    }
    int search(node* ptr, string&s){
        int ans = ptr->idx ;
        for(int i = s.size()-1;i>=0;i--){
            ptr = ptr->arr[s[i] - 'a'] ;
            if(!ptr) return ans ;
            ans = ptr->idx ;
        }
        return ans ;
    }
};