class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        int n = wall.size();
        int maxSum ;
        // the point through which the line passes and doesnt cut the brick can
        // be given by sum till that brick
        int sum  ;
        //the sum which appears the most time can be used to get the answer
        unordered_map<int,int> mp ;
        for(int i =0; i<n;i++){
            sum = 0 ;
            for(int j=0; j<wall[i].size()-1;j++){
                sum += wall[i][j] ;
                mp[sum]++ ;
            }
        }
        int times = 0 ;
        for(auto i : mp){
            if(times < i.second){
                times = i.second ;
                maxSum = i.first ;
            }
        }
        cout<<maxSum<<" "<<times<<endl ;
        return (n - times);
    }
};