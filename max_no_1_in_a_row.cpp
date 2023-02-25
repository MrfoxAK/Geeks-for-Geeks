// your code here

            int max=0;

            int count = 0;

            int ans = 0;

            for(int i = 0; i<N; i++){

                for(int j=0; j<M; j++){

                    if(Mat[i][j]==1)

                     count++;

                }

                if(count>max){

                    max = count;

                    ans =  i;

                   

                }

                count = 0;

            }

            return ans;