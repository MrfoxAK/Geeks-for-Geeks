class Solution {
  public:
    int minimumInteger(int N, vector<int> &A) {
        long long  S=0;
        for(int i=0;i<N;i++){
            S+=A[i];
        }
        
        long long X=INT_MAX;
        for(int i=0;i<N;i++){
            if( S<=(long long)N*A[i] ) {
                X=min(X,(long long)A[i]);
            }
        }
        return X;
    }
};