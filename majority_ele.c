
// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int a[], int size)
{
    // your code here
    // int arr[size];
    // for(int i=0;i<size;i++){
    //     arr[i]=0;
    // }
    // for(int i=0;i<size;i++){
    //     for(int j=0;j<size;j++){
    //         if(a[i]==a[j]){
    //             arr[i]++;
    //             // arr[j]++;
    //         }
    //     }
    // }
    // int i,max=0;
    // for(i=0;i<size;i++){
    //     if(arr[i]>max)
    //     max=arr[i];
    // }
    // // return max;
    // if(max>(size/2))
    // return max;
    // else
    // return -1;
    
    int c=1;
        int x=size/2;
        for(int i=0;i<size;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(a[i]==a[j])
                c++;
    
            }
            if(c>x)
            return a[i];
            
            c=0;
        }
        
        return -1;
}
