/*  Structure of a Binary Tree

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

class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {
        // Your code here
        int ans=0;

        if(!root) return ans;

        

        queue<Node*> q;

        q.push(root);

        while(!q.empty())

        {

            int size=q.size();

            ans=max(ans,size);

            for(int i=0;i<size;i++)

            {

                Node* n=q.front();

                q.pop();

                if(n->left) q.push(n->left);

                if(n->right) q.push(n->right);

                

            }

            

        }

        return ans;
    }
};