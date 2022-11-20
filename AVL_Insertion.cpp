struct Node
{
     int data;
     Node *left;
     Node *right;
     int height;
};
* /

    class Solution
{
public:
     /*You are required to complete this method */
     int height(Node *N)
     {
          if (N == NULL)
               return 0;
          return N->height;
     }

     Node *rightRotate(Node *y)
     {
          Node *x = y->left;
          Node *T2 = x->right;

          x->right = y;
          y->left = T2;

          y->height = max(height(y->left),
                          height(y->right)) +
                      1;
          x->height = max(height(x->left),
                          height(x->right)) +
                      1;

          return x;
     }

     Node *leftRotate(Node *x)
     {
          Node *y = x->right;
          Node *T2 = y->left;

          y->left = x;
          x->right = T2;

          x->height = max(height(x->left),
                          height(x->right)) +
                      1;
          y->height = max(height(y->left),
                          height(y->right)) +
                      1;

          return y;
     }

     int getBalance(Node *N)
     {
          if (N == NULL)
               return 0;
          return height(N->left) - height(N->right);
     }

     Node *insertToAVL(Node *node, int key)
     {
          if (node == NULL)
               return (new Node(key));

          if (key < node->data)
               node->left = insertToAVL(node->left, key);
          else if (key > node->data)
               node->right = insertToAVL(node->right, key);
          else
               return node;

          node->height = 1 + max(height(node->left),
                                 height(node->right));

          int balance = getBalance(node);

          if (balance > 1 && key < node->left->data)
               return rightRotate(node);

          if (balance < -1 && key > node->right->data)
               return leftRotate(node);

          if (balance > 1 && key > node->left->data)
          {
               node->left = leftRotate(node->left);
               return rightRotate(node);
          }

          if (balance < -1 && key < node->right->data)
          {
               node->right = rightRotate(node->right);
               return leftRotate(node);
          }

          return node;
     }
};