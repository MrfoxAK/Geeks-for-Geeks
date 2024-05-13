class Solution {
    private:
    void dfs(vector<vector<int>> &adj, int i, vector<int> &isVisited, vector<int> &temp){
        temp.push_back(i);
        isVisited[i]++;
        for(auto &it : adj[i]){
            if(isVisited[it] == 0)
                dfs(adj, it, isVisited, temp);
        }
        return;
    }
    public:
    int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) {
        // code here
        vector<vector<int>> adj(v + 1, vector<int> {});
        for(auto &e: edges){
            int a = e[0];
            int b = e[1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        int numberOfGoodComponents = 0;
        vector<int> isVisited (v + 1, 0);
        for(int i = 1; i <= v; i++){
            if(isVisited[i] == 0){
                vector<int> temp;
                dfs(adj, i, isVisited, temp);
                bool flag = true;
                for(auto &it : temp){
                    if(adj[it].size() != temp.size() - 1){
                        flag = false;
                        break;
                    }
                }
                if (flag){
                    numberOfGoodComponents++;
                }
            }
        }
        return numberOfGoodComponents;
    }
};