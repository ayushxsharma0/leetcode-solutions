class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        //push the numbers into the stack
        //when confronted by a operator ... pop two numbers and perform operation

        stack<int> st ;
        int x,y ;
        for(auto i : tokens){
            if(i == "*" || i=="/" || i=="+" || i=="-"){
                y = st.top() ; st.pop() ;
                x = st.top() ; st.pop() ;
                int ans ;
                if(i == "*"){
                    ans = x * y ;
                }
                else if(i == "/"){
                    ans = x / y ;
                }
                else if(i == "+"){
                    ans = x + y ;
                }
                else{
                    ans = x -y ;
                }
                st.push(ans) ;
            }
            else{
                int x = stoi(i) ;
                st.push(x) ;
            }
        }
        return st.top() ;
    }
};