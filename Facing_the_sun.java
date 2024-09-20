

// User function Template for Java

class Solution {
    // Returns count buildings that can see sunlight
    public int countBuildings(int[] height) {
        // code here
        if(height.length==0){
            return 0;
        }
        int count=1,maxi=height[0];
        for(int i=1;i<height.length;i++){
            maxi=Math.max(maxi,height[i-1]);
            if(maxi<height[i]){
                count++;
            }
        }
        return count;
    }
}