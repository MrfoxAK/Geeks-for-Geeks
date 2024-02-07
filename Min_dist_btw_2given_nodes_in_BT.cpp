/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution{
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
    Node * LCA(Node* root, int a, int b)
    {
        if(root==NULL || root->data == a|| root->data == b)
        {
            return root;
        }
        
        Node* left = LCA(root->left,a,b);
        Node* right = LCA(root->right,a,b);
        
        if(! left)
        {
            return right;
        }
        else if(!right)
        {
            return left;
        }
        else{
            return root;
        }
    }
    
    int findDistUtil(Node* root, int k) {
        if(root == NULL)
        {
            return -1;
        }
        
        if(root->data == k)
        {
            return 0;
        }
        
        int left = findDistUtil(root->left,k);
        if(left>=0)
        {
            return 1+left;
        }
        int right = findDistUtil(root->right,k);
        if(right>=0){
            return 1+right;
        }
        return -1;
    }
    int findDist(Node* root, int a, int b) {
        // Your code here
        Node * common = LCA(root,a,b);
        int distA = findDistUtil(common,a);
        int distB = findDistUtil(common,b);
        return (distA+distB);
    }
};