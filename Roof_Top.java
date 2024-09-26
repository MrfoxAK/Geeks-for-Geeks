class Solution {
     // Function to find maximum number of consecutive steps
     // to gain an increase in altitude with each step.
     public int maxStep(int arr[]) {
         // Your code here
         // Your code here
         
         int c = 0;
         int ans = 0;
         for(int i = 1; i<arr.length; i++){
             if(arr[i-1]<arr[i]){
                 c++;
             }
             else{
                 c=0;
             }
             ans = Math.max(ans, c);
         }
         return ans;
     }
 }