#include <stdio.h>

void UnvisitedLeaves(int frg[],int N, int leaves){
     int arr[leaves];
     // all unvisited places are 0
     for (int i = 0; i < leaves; i++)
     {
          arr[i] = 0;
     }
     // main part
     for (int i = 0; i < N; i++)
     {
          for (int j = 0; j <= leaves; )
          {
               arr[j] = 1;
               j+=frg[i];
               // printf("%d\n",j);
          }
     }
     for (int i = 0; i < leaves; i++)
     {
          printf("%d ",arr[i]);
     }
}

int main()
{
     int frg[] = {3, 2, 4};
     int leaves = 4;
     int N=3;
     UnvisitedLeaves(frg,N,leaves);
     return 0;
}

// int unvisitedLeaves(int n, int leaves, int frogs[]) {
//         vector<int> vis(leaves + 1);
//         for(int i = 0; i < n; i++) {
//             if(frogs[i] <= leaves and !vis[frogs[i]]) {
//                 for(int j = frogs[i]; j <= leaves; j += frogs[i]) 
//                     vis[j] = 1;
//             }
//         }
        
//         int count = 0;
//         for(int i = 1; i <= leaves; i++) {
//             if(!vis[i]) count++;
//         }
        
//         return count;
//     }