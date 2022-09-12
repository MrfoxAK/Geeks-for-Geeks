








































Refresh

Time (IST)	Status	Lang	Test Cases	Code
2022-09-12 11:57:42	Correct	cpp	232 / 232	View
2022-09-12 11:57:07	Wrong	cpp	0 / 232	View
C++ (g++ 5.4)
Average Time:
10m
Your Time:
39m



 

//User function Template for C++

class Solution {
public:
int MinimumExchange(vector<vector<char>>matrix){
   int m=matrix.size();
   int n=matrix[0].size();
   char ch1='A';
   char ch2='B';
   int res1=0;
   int res2=0;
   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
               if(i%2==0 && j%2==0){
                   if(matrix[i][j]!=ch1){
                       res1++;
                    }                                         //yha hm ABABAB

                                                              //             BABABA
               }                                             //              ABABAB  pattern 
                if(i%2==0 && j%2!=0){        // check kr rhe h 
                    if(matrix[i][j]!=ch2){
                        res1++;
                    }
                }
                if(i%2!=0 && j%2==0){
                    if(matrix[i][j]!=ch2){
                        res1++;
                    }
                }
                if(i%2!=0 && j%2!=0){
                    if(matrix[i][j]!=ch1){
                        res1++;
                    }
                }
            
       }
   }
   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
               if(i%2==0 && j%2==0){
                   if(matrix[i][j]!=ch2){
                       res2++;
                   }
               }
           
                if(i%2==0 && j%2!=0){             // BABABA
                    if(matrix[i][j]!=ch1){               //  ABABAB
                        res2++;                             //   BABABA check kr rhe kon
                    }                                             //kon kon apni jagah nhi h 
                }
                if(i%2!=0 && j%2==0){
                    if(matrix[i][j]!=ch1){
                        res2++;
                    }
                }
                if(i%2!=0 && j%2!=0){
                    if(matrix[i][j]!=ch2){
                        res2++;
                    }
                }
            
       }
   }
   return min(res1,res2);
    
}

};