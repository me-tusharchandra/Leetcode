class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();

        bool r0 = false;
        bool c0 = false;
        bool temp = false;

        if(matrix[0][0] == 0) temp = true;

        for(int i=1; i<r; i++){
            if(matrix[i][0] == 0){
                c0 = true;
                break;
            }
        }

        for(int j=1; j<c; j++){
            if(matrix[0][j] == 0){
                r0 = true;
                break;
            }
        }

        for(int i=1; i<r; i++){
            for(int j=1; j<c; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for(int i=1; i<r; i++){
            if(matrix[i][0] == 0){
                for(int j=1; j<c; j++){
                    matrix[i][j] = 0;
                }
            }
        }

        for(int i=1; i<c; i++){
            if(matrix[0][i] == 0){
                for(int j=1; j<r; j++){
                    matrix[j][i] = 0;
                }
            }
        }

        if(r0){
            for(int i=0; i<c; i++){
                matrix[0][i] = 0;
            }
        }

        if(c0){
            for(int j=0; j<r; j++){
                matrix[j][0] = 0;
            }
        }

        if(temp){
            for(int i=0; i<r; i++){
                matrix[i][0] = 0;
            }

            for(int i=0; i<c; i++){
                matrix[0][i] = 0;
            }
        }
    }
};