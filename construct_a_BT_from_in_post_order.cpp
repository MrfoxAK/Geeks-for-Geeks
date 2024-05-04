int Find(int in[], int target, int start, int end) {
            for(int i = start; i <= end; i++)
                if(in[i] == target)
                    return i;
            return end-1;
       }
    
        Node* Tree(int in[],int post[], int InStart, int InEnd, int index) {
            if( InStart > InEnd) return NULL;
            Node* root = new Node(post[index]);
            int pos = Find(in, post[index], InStart, InEnd);
        
            // right
            root->right = Tree(in, post, pos + 1, InEnd, index - 1);
            // left 
            root->left = Tree(in, post, InStart, pos - 1, index - (InEnd - pos) - 1);
           return root;
        }
    //Function to return a tree created from postorder and inoreder traversals.
    Node *buildTree(int in[], int post[], int n) {
        // Your code here
        return Tree(in, post, 0, n-1, n-1);
    }