class Solution {
public:
    
    bool d(vector<vector<char>>& b, string &w, int i,int j,int k,vector<vector<int>>&vis)
    {
        if(k>=w.size())
        {
            return 1;
        }
        if(i<0 || j<0 || i>=b.size() || j>=b[0].size() || vis[i][j]==1 || b[i][j]!=w[k])
        {
            return 0;
        }
        
        if(w[k]==b[i][j] && vis[i][j]==0)
        {
            vis[i][j]=1;
            bool r= d(b,w,i,j+1,k+1,vis) ;
            bool n=d(b,w,i+1,j,k+1,vis) ;
            bool l=d(b,w,i,j-1,k+1,vis) ;
            bool u=d(b,w,i-1,j,k+1,vis)  ;
            vis[i][j]=0;
            return (r | n | l |u);
        }
        return 0;
    }
    
    bool exist(vector<vector<char>>& b, string w) {
        queue<pair<int,int>>q;
        for(int i=0;i<b.size();i++)
        {
            for(int j=0;j<b[0].size();j++)
            {
                if(w[0]==b[i][j])
                {
                q.push({i,j});
                }
            }
        }
        
        while(!q.empty())
        {
        vector<vector<int>>vis(10,vector<int>(10,0));
            auto c=q.front();
            q.pop();
            int i=c.first,j=c.second;
                if(d(b,w,i,j,0,vis))
                {
                    return 1;
                }
        }
        return 0;
        
    }
};