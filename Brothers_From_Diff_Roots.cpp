//User function Template for C++

/*Structure of the Node of the BST is as
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution
{
public:

    void inorder(Node *root,unordered_map<int,int> &mp)
    {
        if(root!=NULL)
        {
            inorder(root->left,mp);
            mp[root->data]++;
            inorder(root->right,mp);
        }
    }
    
    int countPairs(Node* root1, Node* root2, int x)
    {
        unordered_map<int,int> mp1;
        inorder(root1,mp1);
        unordered_map<int,int> mp2;
        inorder(root2,mp2);
        int ans=0;
        for(auto it:mp1)
        {
            int s=x-it.first;
            if(mp2.find(s)!=mp2.end())
            {
                ans+=it.second*mp2[s];
            }
        }
        return ans;
    }
};