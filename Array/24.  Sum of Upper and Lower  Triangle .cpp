Link: https://www.geeksforgeeks.org/problems/sum-of-upper-and-lower-triangles-1587115621/1

class Solution
{   
    public:
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        vector<int>sum;
        int lower_sum=0;
        int upper_sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                lower_sum+=matrix[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=n-1;j>=i;j--){
                upper_sum+=matrix[i][j];
            }
        }
        sum.push_back(upper_sum);
        sum.push_back(lower_sum);
        return ans;
    }
};
