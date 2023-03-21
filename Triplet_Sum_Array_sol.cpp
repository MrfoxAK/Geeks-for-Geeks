class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=X-A[i];
                if(A[j]+A[k] == sum){
                    return true;
                }
                else if(A[j]+A[k] > sum){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return false;
    }

};