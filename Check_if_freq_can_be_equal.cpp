bool sameFreq(string s)
    {
        // code here 
        vector<int> arr(26,0);
        vector<int> v;
        for(int i=0;i<s.size();i++)
        {
            arr[s[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i]!=0) v.push_back(arr[i]);
        }
        sort(v.begin(),v.end());
        int n=v.size();
        if(n==1) return true;
        if(v[n-1]-v[0]<=1 and v[n-2]==v[0]) return true;
        if(v[0]==1 and v[1]==v[n-1]) return true;
        return false;
}