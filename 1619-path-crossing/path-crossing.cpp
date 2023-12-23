class Solution {
public:
    bool isPathCrossing(string path) {
        pair<int,int> p(0,0) ;
        set<pair<int,int>> st ;
        st.insert(p) ;
        for(auto i : path){
            if(i == 'N'){
                p.second++ ;
            }
            if(i == 'S'){
                p.second-- ;
            }
            if(i == 'E'){
                p.first++ ;
            }
            if(i == 'W'){
                p.first-- ;
            }
            if(st.find(p) != st.end()) return true ;
            else{
                st.insert(p) ;
            }
        }
        return false ;
    }
};