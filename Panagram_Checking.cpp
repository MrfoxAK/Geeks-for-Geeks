//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        vector<int>a(26,0);
        for(int i = 0; i<s.size(); i++){
            if((s[i]-'a'>=0) && (s[i]-'a'<26)){
                a[s[i]-'a']++;
            }
        }
       
        for(int i = 0; i<26; i++){
            if(a[i]==0)
            return false;
        }
        return true;
    }

};