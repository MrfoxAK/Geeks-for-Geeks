//User function Template for C++

class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
        for(int i=0; i<m; i++){
            if((i<1 || seats[i-1]==0) &&seats[i]==0 && (i>m-2 || seats[i+1]==0)){
                seats[i]=1;
                n--;
            }
            if(n==0) return 1;
        }
        return 0;
    }
};

