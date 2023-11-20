class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int idxg = 0; int idxp =0 ; int idxm =0 ;
        for(int i =0;i<garbage.size();i++){
            for(auto k : garbage[i]){
                if(k == 'G'){
                    idxg = max(idxg,i) ;
                }
                else if(k == 'M'){
                    idxm = max(idxm,i) ;
                }
                else if(k == 'P'){
                    idxp = max(idxp,i) ;
                }
            }
        }
        int ans = 0 ;
        int count =0 ;
        int house = 0 ;
        //for metal garbage
        for(int i =0; i<=idxm ;i++){
            for(auto k : garbage[i]){
                if(k== 'M') count++ ;
            }
            if(house<travel.size() && house < idxm){
            count += travel[house++] ;
            }
        }
        ans+= count ;
        count = 0 ; house = 0;
        //for paper garbage
        for(int i =0;i<=idxp ;i++){
            for(auto k : garbage[i]){
                if(k== 'P') count++ ;
            }
            if(house < travel.size() && house<idxp) {
                count+= travel[house++] ;
            }
        }
        ans+= count ;
        count = 0; house = 0 ;
        //for glass garbage
        for(int i =0;i<idxg +1 ;i++){
            for(auto k : garbage[i]){
                if(k== 'G') count++ ;
            }
            if(house < travel.size() && house <idxg){
            count += travel[house++] ;
            }
        }
        ans+= count ;
        return ans ;
    }
};