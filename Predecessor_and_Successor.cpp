/* BST Node
struct Node
{
     int key;
     struct Node *left;
     struct Node *right;

     Node(int x){
         key = x;
         left = NULL;
         right = NULL;
     }
};
*/

// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
class Solution
{
public:
     void inorder(Node *root, Node *&pre, Node *&suc, int k)
     {
          if (root == NULL)
               return;
          if (root->key == k)
          {
               inorder(root->left, pre, suc, k);
               inorder(root->right, pre, suc, k);
          }
          else if (root->key > k)
          {
               suc = root;
               inorder(root->left, pre, suc, k);
          }
          else if (root->key < k)
          {
               pre = root;
               inorder(root->right, pre, suc, k);
          }
     }
     void findPreSuc(Node *root, Node *&pre, Node *&suc, int k)
     {
          inorder(root, pre, suc, k);
     }
};