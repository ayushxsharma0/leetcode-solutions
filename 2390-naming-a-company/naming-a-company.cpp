class Solution {
public:
    int intersection(unordered_set<string>& s1, unordered_set<string>& s2){
        int x =0 ;
        for(auto i : s1){
            if(s2.find(i) != s2.end()){
                x++ ;
            }
        }
        return x ;
    }
    long long distinctNames(vector<string>& ideas) {
        long long ans =0 ;

        vector<unordered_set<string>> map(26) ;
        //to create the set of all suffixes associated to an alphabet
        for(auto i : ideas){
            map[i[0] - 'a'].insert(i.substr(1)) ;
        }
        //find common suffixes
        for(int i=0; i<25;i++){
            if(map[i].size() != 0){
                for(int j = i+1;j<26;j++){
                    if(map[j].size() != 0){
                        int com = intersection(map[i],map[j]) ;
                        ans += 2*(map[i].size() - com)*(map[j].size() - com) ;
                    }
                }
            }
        }
        return ans ;
    }
};