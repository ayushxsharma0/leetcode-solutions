
class Solution {
public:
    vector<long long> unmarkedSumArray(vector<int>& nums, vector<vector<int>>& q) {
        //to mark an element place 0 at its place as all values in nums is positive
        int n = q.size() ;
        vector<long long> ans ;
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq ;
        long long sum = 0 ;
        for(int i = 0;i<nums.size();i++){
            sum += nums[i] ;
            pq.push(make_pair(nums[i],i)) ;
        }

        for(auto x : q){
            sum -= nums[x[0]] ;
            nums[x[0]] = 0 ;
            while(pq.size() && x[1]){
                
                if(nums[pq.top().second]){
                    sum -= nums[pq.top().second] ;
                    nums[pq.top().second] = 0 ;
                    x[1]-- ;
                }
                pq.pop() ;
            }
            ans.push_back(sum);
        }
        return ans ;
    }
};