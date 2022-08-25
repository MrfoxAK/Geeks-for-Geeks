class Solution
{
    public static ArrayList<Integer> countEleLessThanOrEqual(int arr1[], int arr2[], int m, int n)
    {
       // add your code here
        ArrayList<Integer> a= new ArrayList<>();
        int count=0;
        for(int i=0;i<arr1.length;i++)
        {
            count=0;
            for(int j=0;j<arr2.length;j++)
            {
                if(arr1[i]>=arr2[j])
                {
                    count++;
                }
            }
            a.add(count);
        }
        return(a);
    }
}


// better aproch

 int fun(int i,int j,int arr[],int k){
       int idx=-1;
       int low=i;
       int high=j;
       int mid=(i+j)/2;
       while(low<=high){
           if(arr[mid]<=k){
               idx=mid;
               low=mid+1;
           }
           if(arr[mid]>k){
               high=mid-1;
           }
           mid=(low+high)/2;
       }
       return idx;
   }
   vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                int m, int n)
   {
   //Your code goes here
   sort(arr2,arr2+n);
   vector<int>ans;
   for(int i=0;i<m;i++){
       int x=fun(0,n-1,arr2,arr1[i]);
       ans.push_back(x+1);
   }
   return ans;
   }