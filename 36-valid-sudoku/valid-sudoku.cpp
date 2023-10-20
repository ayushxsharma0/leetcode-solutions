class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // three conditions need to be satisfied for a valid sudoku
        unordered_map<char,int> mp1 ;
        unordered_map<char,int> mp2 ;
        
        int i,j ;
        //check if all rows and cols are valid 
        for(i =0; i<9; i++){
            for(j=0;j<9;j++){

                // to check whole row
                if(board[i][j] != '.'){
                    mp1[board[i][j]] ++ ;
                }
                //to check whole col

                if(board[j][i] != '.'){
                    mp2[board[j][i]] ++ ;
                }

                if(mp1[board[i][j]] > 1 || mp2[board[j][i]] > 1){   //if same num is more than once in same row
                    return false ;
                }
            }
            mp1.clear() ;
            mp2.clear() ;
        }
        mp1.clear() ;
        // check each 3x3 smaller matrices
        for(i = 0 ;i<9; i+=3){
            for(j=0; j<9;j+=3){
                for(int r =i ; r<i+3;r++){
                    for(int c = j;c<j+3;c++){
                        if(board[r][c] != '.'){
                            mp1[board[r][c]] ++ ;
                        }
                        if(mp1[board[r][c]] > 1){
                            return false ;
                        }
                    }
                }
                mp1.clear() ;
            }
        }

        return true ;
    }
};