class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans = 0;
        int maxtime= neededTime[0] ;
        //holding 0th balloon in the hand
        for(int i = 1;i<colors.size();i++){
            if(colors[i] == colors[i-1]){
                ans+=min(maxtime,neededTime[i]) ;
                //hold the balloon with highrst time
                maxtime = max(maxtime,neededTime[i]) ;
            }
            else{
                //hold the new ballon 
                maxtime = neededTime[i] ;
            }
        }
        return ans ;
    }
};