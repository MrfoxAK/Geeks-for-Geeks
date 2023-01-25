// User function template for C++

class Solution {
  public:
    int minOperation(string s) {
        // code here
        int count=0;
        for(int i=0;i<s.size();i++){
            string k=s.substr(0,i+1);
            int ni=k.size();
            if(ni%2==0){
                string a=k.substr(0,ni/2);
                string b=k.substr(ni/2,ni/2);
                if(a==b){
                    int counti=0;
                    counti+=(ni/2);
                    counti--;
                    count=max(count,counti);
                }
            }
        }
        int ans=s.size()-count;
        return ans;
    }
};