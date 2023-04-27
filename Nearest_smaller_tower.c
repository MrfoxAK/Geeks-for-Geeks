#include <stdio.h>

int main()
{
    int arr[] = {4, 8, 3, 5, 3};
    int n = 5;
    int leftSmller, rightsmller;
    int ans[n];
    int j = 0, z = 0;
    int key;
    // printf("%d",smallest(arr,0,5,3));
    for (int i = 0; i < n; i++)
    {
        key = arr[i];
        j=i+1;
        if(j>=n){
            rightsmller = -1;
        }
        else{
            while (j<n){
                if(arr[j]<key){
                    break;
                }
                if(arr[j] == n){
                    j=-1;
                    break;
                }
                j++;
            }
            rightsmller = j;
        }
        j = i-1;
        if(j<=0){
            leftSmller = -1;
        }
        else{
            while (j>=0)
            {
                if(arr[j]<key){
                    break;
                }
                if(arr[j] == 0){
                    j=-1;
                    break;
                }
                j--;
            }
            leftSmller = j;
        }
        // printf("%d,%d\n",leftSmller,rightsmller);
        if(leftSmller == -1 && rightsmller == -1){
            ans[z] = -1;
            z++;
        }
        else if(leftSmller == -1 && rightsmller != -1){
            ans[z] = rightsmller;
            z++;
        }
        else if(leftSmller != -1 && rightsmller == -1){
            ans[z] = leftSmller;
            z++;
        }
        else if(leftSmller != -1 && rightsmller != -1){
            if(leftSmller<rightsmller){
                ans[z] = leftSmller;
                z++;
            }
            else{
                ans[z] = rightsmller;
                z++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d,", ans[i]);
    }
    return 0;
}
