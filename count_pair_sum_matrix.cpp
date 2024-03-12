//User function template for C++
class Solution{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    // Your code goes here
	    // Your code goes here
        set<int>s;
        int cnt = 0;
        for(int i=0;i<n;i++){
            for(int j = 0;j<n;j++){
                s.insert(mat1[i][j]);
            }
        }
         for(int i=0;i<n;i++){
            for(int j = 0;j<n;j++){
                auto it = s.find(x-mat2[i][j]);
                if(it!=s.end()){
                    cnt++;
                }
            }
        }
        return cnt;
	}
};