class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_set<char>> rows,colmns;
        map<pair<int,int>,unordered_set<char>> squares;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                int value = board[i][j];
                if(value=='.') continue;
                pair<int,int> squareKey = {i/3,j/3};
                if(rows[i].count(value)||colmns[j].count(value)||squares[squareKey].count(value)){
                    return false;
                }
                rows[i].insert(value);
                colmns[j].insert(value);
                squares[squareKey].insert(value);
        }
      }  
      return true;
    }
};
