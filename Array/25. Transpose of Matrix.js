Link: https://www.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1


class Solution {
    //Function to find transpose of a matrix.
    transpose(matrix, n)
    {
    let temp;
        for(let i = 0; i < n; i++){
            for(let j = 0; j <= i; j++){
                temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
    }
}
