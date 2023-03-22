void connect(Node *root)

    {

       // Your Code Here

       queue<Node*>q;

       q.push(root);

       while(!q.empty()){

           int n=q.size();

           while(n){

               Node*curr=q.front();

               q.pop();

               if(n==1)

               curr->nextRight=NULL;

               else

               curr->nextRight=q.front();

               

               if(curr->left)

               q.push(curr->left);

               if(curr->right)

               q.push(curr->right);

               n--;

           }

       }

    } 