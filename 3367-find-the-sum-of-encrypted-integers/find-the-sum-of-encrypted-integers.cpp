class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int n = nums.size() ;
        int sum = 0 ;
        for(int i =0;i<n;i++){
            string s = "" ;
            s = to_string(nums[i]) ;
            int mx = 45 ;
            int idx = -1 ;
            for(int j =0;j<s.size();j++){
                int x = (int) s[j] ;
                if(mx < x){
                    mx = x ;
                }
            }
            string str = "" ;
            for(int j = 0;j<s.size();j++){
                str += (char)mx ;
            }
            sum += stoi(str) ;
        }
        return sum ;
    }
};