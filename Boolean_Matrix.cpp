

class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int>>& mat) {
        int n=mat.size(), m=mat[0].size();
        vector<int> row(n,0);
        vector<int> col(m,0);
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(mat[i][j]==1) 
                    row[i]=1,col[j]=1;
        for(int i=0;i<n;i++) 
            for(int j=0;j<m;j++) 
                if(row[i] or col[j])
                    mat[i][j]=1;
    }
};