class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1 ;   
        stack<char> s2 ;

        string a="" ;  //to store final s
        string b ="" ;  //to store final t

        for(auto i : s){
            if(i != '#'){
                s1.push(i) ;
            }
            else{
                if(!s1.empty()){
                    s1.pop() ;
                }
            }
        }

        for(auto i : t){
            if(i != '#'){
                s2.push(i) ;
            }
            else{
                if(!s2.empty()){
                    s2.pop() ;
                }
            }
        }
        while(!s1.empty()){
            a += s1.top() ;
            s1.pop() ;
        }
        while(!s2.empty()){
            b += s2.top() ;
            s2.pop() ;
        }
    
    return a==b ;
    }
};