Link: https://www.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1

void transpose(vector<vector<int> >& matrix, int n)
    {
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
