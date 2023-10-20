class Solution {
public:

    bool validity(vector<vector<char>>& b, char ch, int row, int col){
        for(int i=0;i<9;i++){
            if(b[row][i] == ch && i!=col){
                return false ;
            }
            if(b[i][col] == ch && i!=row){
                return false ;
            }
        }
        return true ;
    }

    bool subsq(vector<vector<char>>& b){
        for(int row =0; row<9; row +=3){
            for(int col=0; col<9;col+=3){
                set<int> s ;
                for(int i =row;i<row+3;i++){
                    for(int j = col;j<col+3;j++){
                        if(b[i][j] != '.'){
                            if(s.insert(b[i][j]).second == false){
                                return false ;
                            }
                        }
                    }
                }
            }
        }
        return true ;
    }

    bool isValidSudoku(vector<vector<char>>& board){
        char ch ;
        for(int i =0;i<9;i++){
            for(int j =0;j<9;j++){
                if(board[i][j] != '.'){
                    ch = board[i][j] ;
                if(!validity(board,ch,i,j)){
                    return false ;
                }
            }
        }
    }
        if(!subsq(board)){
            return false ;
        }
        return true ;
    }
};