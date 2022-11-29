

// User function Template for Java

class Solution {
     ArrayList<Integer> findSubarray(int a[], int n) {
 
         int max=0,start=0,end=-1,i=0,j=0,sum=0;
         while(j<n){
             if(a[j]>=0){
                 sum+=a[j];
                 j++;
             }else{
                 if(sum>max){
                     max=sum;
                     start=i;
                     end=j-1;
                 }
                 sum=0;
                  j++;
                  i=j;
             }
         }
         
         //extra
         if(sum>max){
             start=i;
             end=j-1;
         }
          ArrayList<Integer> list=new ArrayList<>();
          for(int k=start;k<=end;k++){
              list.add(a[k]);
          }
          
          if(list.size()==0){
              list.add(-1);
          }
         return list;
     }
 }