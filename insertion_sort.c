

/* The task is to complete insert() which is used 
   as shown below to implement insertionSort() */


    // void insert(int arr[], int i)
    // {
    //     // Your code here  
    // }
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        int key,j;
        for (int i = 0; i <n; i++)
        {
            int key = arr[i];
            j=i-1;
            while (j>=0 && arr[j]>key)
            {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1]=key;
        }
    }