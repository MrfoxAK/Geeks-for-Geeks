// User function template for C++

/*
Structure of a node is as following
struct Node
{
     int data;
     struct Node* left;
     struct Node* right;
};
*/

class Solution
{
public:
     // Function should return all the ancestor of the target node
     bool solve(Node *root, vector<int> &v, int target)
     {
          if (!root)
               return false;
          if (root->data == target)
               return true;
          if (solve(root->left, v, target) || solve(root->right, v, target))
          {
               v.push_back(root->data);
               return true;
          }
     }
     // Function should return all the ancestor of the target node
     vector<int> Ancestors(struct Node *root, int target)
     {
          vector<int> v;
          // A vector to store ans
          solve(root, v, target);
          return v;
     }
};