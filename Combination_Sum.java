

// User function Template for Java

class Solution {
    public void findComb(int arr[],int idx,int n,int k,List<List<Integer>> ans,List<Integer> list){
        if(k==0){
            ans.add(new ArrayList<>(list));
            return;
        }
        if(idx==n || k < 0) return;
        
        for(int i = idx; i<n; i++){
            if(i>idx && arr[i]==arr[i-1])continue;
            if(arr[i]>k)  return;//as we are decr k again and again, we should return if currentElem > k
            list.add(arr[i]);
            findComb(arr,i+1,n,k-arr[i],ans,list);
            list.remove(list.size()-1);
        }
        return;
    }
    
    public List<List<Integer>> CombinationSum2(int arr[], int n, int k) {
        Arrays.sort(arr);
        List<List<Integer>> ans = new ArrayList<>();
        findComb(arr,0,n,k,ans,new ArrayList<>());
        return ans;
    }
}
}