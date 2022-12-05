/* A binary tree Node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */


class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      queue<Node *> q;
      vector<int> res;
      q.push(node);
      while(!q.empty()) {
          Node* curr = q.front();
          res.push_back(curr->data);
          if(curr->left != NULL) 
            q.push(curr->left);
          if(curr->right != NULL)
            q.push(curr->right);
          q.pop();
      }
      return res;
    }
};