class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        //if value of k is greater than size of arr then maximum element will always be the winner
        if(k >= arr.size()){
            int mx = INT_MIN ;
            for(auto i : arr){
                mx = max(mx,i)  ;
            }
            return mx ;
        }
        // unordered_map<int,int> mp ;  // to store number of wins of each element
        // //simulation of the game as suggested in the question
        // //though this gives TLE :( 
        // while(1){
        //     if(arr[1]>arr[0]){
        //         swap(arr[0],arr[1]) ;
        //     }
        //     mp[arr[0]] ++ ;
        //     if(mp[arr[0]] == k){
        //         break ;
        //     }
        //     rotate(arr.begin()+1,arr.begin()+2,arr.end()) ;
        // }
        // return arr[0] ;

        //O(N) APPROACH, resembles a bit of kadanes algorithm
        int win = arr[0] ;
        int wins = 0;
        for(int i =1;i<arr.size();i++){
            if(win>arr[i]){
                wins++ ;
            }
            else{
                win = arr[i] ;
                wins = 1 ;
            }
            if(wins == k){
                break ;
            }
        }
        return win ;
    }
};