
/* Node is as follows:

struct Node
{
     int data, height;
     Node *left, *right;
     Node(int x)
     {
          data = x;
          height = 1;
          left = right = NULL;
     }
};

*/

int height(Node *root)
{
     if (!root)
          return 0;
     int lh = height(root->left);
     int rh = height(root->right);
     return max(lh, rh) + 1;
}
int getBalance(Node *root)
{
     if (!root)
          return 0;
     int lh = height(root->left);
     int rh = height(root->right);
     return (lh - rh);
}
Node *rightRotate(Node *root)
{
     Node *temp1 = root->left;
     Node *temp2 = temp1->right;
     temp1->right = root;
     root->left = temp2;
     return temp1;
}
Node *leftRotate(Node *root)
{
     Node *temp1 = root->right;
     Node *temp2 = temp1->left;
     temp1->left = root;
     root->right = temp2;
     return temp1;
}
Node *inorderSucc(Node *root)
{
     while (root && root->left)
     {
          root = root->left;
     }
     return root;
}
Node *deleteNode(Node *root, int data)
{
     if (!root)
          return NULL;
     if (root->data < data)
     {
          root->right = deleteNode(root->right, data);
     }
     else if (root->data > data)
     {
          root->left = deleteNode(root->left, data);
     }
     else
     {
          if (root->left == NULL)
          {
               Node *temp = root;
               root = root->right;
               delete temp;
          }
          else if (root->right == NULL)
          {
               Node *temp = root;
               root = root->left;
               delete temp;
          }
          else
          {
               Node *temp = inorderSucc(root->right);
               root->data = temp->data;
               root->right = deleteNode(root->right, temp->data);
          }
     }
     if (root == NULL)
          return root;

     int balance = getBalance(root);

     if (balance > 1 && getBalance(root->left) >= 0)
     {
          return rightRotate(root);
     }
     else if (balance > 1 && getBalance(root->left) < 0)
     {
          root->left = leftRotate(root->left);
          return rightRotate(root);
     }
     else if (balance < -1 && getBalance(root->right) <= 0)
     {
          return leftRotate(root);
     }
     else if (balance < -1 && getBalance(root->right) > 0)
     {
          root->right = rightRotate(root->right);
          return leftRotate(root);
     }

     return root;
}