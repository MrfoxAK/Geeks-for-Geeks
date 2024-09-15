/* Structure for tree and linked list

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

// This function should return head to the DLL
class Solution
{
public:
     void inorder(Node *root, vector<int> &ans)
     {
          if (root == NULL)
               return;
          inorder(root->left, ans);
          ans.push_back(root->data);
          inorder(root->right, ans);
     }

     Node *bToDLL(Node *root)
     {
          // code here
          vector<int> ans;
          inorder(root, ans);
          Node *head = new Node(ans[0]);
          head->left = NULL;
          head->right = NULL;
          int n = ans.size();
          Node *point = head;
          for (int i = 1; i < n; i++)
          {
               Node *node = new Node(ans[i]);
               head->right = node;
               node->left = head;
               node->right = NULL;
               head = node;
          }
          return point;
     }
};