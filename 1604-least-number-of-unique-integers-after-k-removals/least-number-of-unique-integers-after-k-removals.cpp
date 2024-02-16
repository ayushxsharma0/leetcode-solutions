class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        //we have to get least number of unique nubers in the array
        int n = arr.size() ;
        unordered_map<int,int> mp ;

        for(auto i : arr){
            mp[i]++ ;
        }
        int ans = mp.size() ;
        if(k == 0) return ans ;

        //this doesnt work 
        // sort(arr.begin(),arr.end()) ;
        // int i =0 ;
        // while(i<n){
        //     int times = mp[arr[i]] ;
        //     if(times <= k){
        //         k -= times ;
        //         ans -= 1 ;
        //         i += times ;
        //     }
        //     else{
        //         i += times ;
        //     }
        //     if(k<=0) return ans ;
        // }

        vector<int> vec ;
        for(auto it : mp){
            vec.push_back(it.second) ;
        }
        sort(vec.begin(),vec.end()) ;
        int removed = 0 ;
        for(int i =0 ; i< vec.size();i++){
            removed += vec[i] ;

            if(removed > k ){
                return vec.size() - i ;
            }
        }
        return 0 ;
    }
};