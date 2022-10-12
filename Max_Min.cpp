
class Solution
{
   public:
    int findSum(int arr[], int N)
    {
    	//code here.
    	int min,max;
   
     min=arr[0];
     max=arr[0];
       
       for (int i=1;i<N;i++)
       {
          if(arr[i]>max)
          {
              max=arr[i];
          }
          else if (arr[i]<min)
          {
              min=arr[i];
          }
          
       }
       return (min+max);
    }

};