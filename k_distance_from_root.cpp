/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution
{
    public:
    // function should print the nodes at k distance from root
    void solve(Node* root, vector<int>&ans, int k, int count){
        if(!root) return;
        
        if(count == k){
            ans.push_back(root -> data);
        }
        
        solve(root->left, ans, k, count+1);
        solve(root->right, ans, k, count+1);
    }
    public:
    // function should print the nodes at k distance from root
    vector<int> Kdistance(struct Node *root, int k)
    {
      // Your code here
      vector<int> ans;
      if(k == 0){
          ans.push_back(root -> data);
          return ans;
      }
      
      solve(root -> left, ans, k, 1);
      solve(root -> right, ans, k, 1);
      
      
      return ans;
    }
};