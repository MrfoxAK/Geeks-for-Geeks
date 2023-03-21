/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution{
  public:
    /*You are required to complete this function*/
    int getLevelDiff(Node *root)
    {
       //Your code here
       if(!root) return 0;
       
       queue<Node*>q;
       q.push(root);
       int e=0, o=0;
       int lvl=1;
       
       while(!q.empty()){
           int n = q.size();
           
           for(int i=0;i<n; i++){
               Node *tmp=q.front();
               q.pop();
               
               if(lvl%2==0){
                   e +=tmp->data;
               }
               else{
                   o +=tmp->data;
               }
               
               if(tmp->left) q.push(tmp->left);
               if(tmp->right) q.push(tmp->right);
           }
           lvl++;
       }
       return (o-e);
    }
};
