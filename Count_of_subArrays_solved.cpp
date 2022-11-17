class Solution{
public:
	// #define ll long long

	ll countSubarray(int arr[], int n, int k) {
	    // code here
	    ll c=0;
        ll totalSubarray = (ll)n*(n+1)/2;
	    for(int i=0;i<n;i++){
	        if(arr[i]<=k)
	            c++;
	        else{
	            totalSubarray = totalSubarray - (c*(c+1))/2;;
	            c=0;
	        }
	    }
	    totalSubarray = totalSubarray - (c*(c+1))/2;;
	    return totalSubarray;
	}
};