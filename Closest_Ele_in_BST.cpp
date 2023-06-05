/*
Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution
{
     void traversal(Node *root, int k, int &ans)
     {
          if (root == NULL)
               return;
          if (root->data <= k)
          {
               ans = min(ans, abs(root->data - k));
               traversal(root->right, k, ans);
          }
          else
          {
               ans = min(ans, abs(root->data - k));
               traversal(root->left, k, ans);
          }
     }

public:
     // Function to find the least absolute difference between any node
     // value of the BST and the given integer.
     int minDiff(Node *root, int K)
     {
          // Your code here
          int ans = INT_MAX;
          traversal(root, K, ans);
          return ans;
     }
};