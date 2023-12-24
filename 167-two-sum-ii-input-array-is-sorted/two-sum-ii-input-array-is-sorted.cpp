class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i =0 ;
        int n = numbers.size() ;
        int j = n -1 ;
        
        while(i<n || j>=0){
            int sum = numbers[i] + numbers[j] ;
            if(sum > target){
                j-- ;
            }
            if(sum < target) i++ ;
            if(sum == target) return {i+1,j+1} ;
        }
        return {} ;
    }
};