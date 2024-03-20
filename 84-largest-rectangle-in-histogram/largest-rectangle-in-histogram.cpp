class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> stk ;  //[index,height]

        int res = 0 ;

        for(int i = 0;i<heights.size(); i++){
            int start = i ;

            //if at any index we get height less than top of stack then we can't continue the prev height
            while(!stk.empty() && stk.top().second > heights[i]){
                int index = stk.top().first ;
                int height = stk.top().second ;
                int width = i- index ;
                stk.pop() ;

                res = max(res, height*width) ;
                start = index ;
            }
            stk.push({start,heights[i]}) ;
        }

        //if the result is present in the stack
        while(!stk.empty()){
            int h = stk.top().second ;
            int w = heights.size() - stk.top().first ;

            stk.pop() ;

            res = max(res,h*w) ;
        }
        return res ;
    }
};