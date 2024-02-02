//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        int number=0;
        if(s[0]=='-'){
            int n=s.size();
            for(int i=1;i<s.size();i++){
                if(s[i] <48 || s[i]>57) return -1;
                else{
                    number=number+(s[i]-'0')*pow(10,n-i-1);
                }
            }
            return -number;
        }
        else{
            int n=s.size();
            for(int i=0;i<s.size();i++){
                if(s[i] <48 || s[i]>57) return -1;
                else{
                    number=number+(s[i]-'0')*pow(10,n-i-1);
                }
            }
            return number;
        }
        return -1;
    }
};