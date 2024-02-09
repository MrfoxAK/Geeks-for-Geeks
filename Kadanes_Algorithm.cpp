   long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long sum=0;
        long long res=(long long)(-1e18);
        for(int i=0;i<n;i++)
        res=max(res,arr[i]*1LL);
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            res=max(res,sum);
            if(sum<0)
            sum=0;
        }
        return res;
        
    }