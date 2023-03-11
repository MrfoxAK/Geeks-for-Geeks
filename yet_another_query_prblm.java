

class Solution {
     public static ArrayList<Integer> solveQueries(int N, int num, int[] A, int[][] Q) {
         ArrayList<Integer> list = new  ArrayList<Integer>();
         Map<Integer, Integer> map=new HashMap<>();
           int[] frequency = new int[N];
           for(int i=N-1;i>=0;i--){
               map.put(A[i],map.getOrDefault(A[i],0)+1);
               
               frequency[i]=map.get(A[i]);
           }
           
           for(int[] arr:Q){
               int l=arr[0];
               int r=arr[1];
               int k=arr[2];
               int count=0;
               for(int i=l;i<=r;i++){
                   if(frequency[i]==k)count++;
               }
               list.add(count);
           }
         return list;
     }
 }
         