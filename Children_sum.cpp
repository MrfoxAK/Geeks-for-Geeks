/*Complete the function below

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
     // Function to check whether all nodes of a tree have the value
     // equal to the sum of their child nodes.
     int isSumProperty(Node *root)
     {
          // Add your code here
          if (root == NULL)
               return 1;
          if (root->left == NULL && root->right == NULL)
               return 1;

          int sum = 0;
          if (root->left)
               sum += root->left->data;
          if (root->right)
               sum += root->right->data;

          if (root->data == sum && isSumProperty(root->left) && isSumProperty(root->right))
          {
               return 1;
          }
          else
          {
               return 0;
          }
     }
};