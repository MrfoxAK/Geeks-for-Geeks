//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node * reverse(Node * head)
    {
      Node * curr = head, *prev =NULL, *front = NULL;
      
      while(curr){
          front = curr->next;
          curr->next = prev;
          prev= curr;
          curr = front;
      }
      return prev;
      
    }
    
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node * rev = reverse(head);
        Node * temp = rev , *tail;
        
        while(temp){
            if(temp->data == 9){
                temp->data =0;
            }
            else{
                temp->data = temp->data+1;
                head = reverse(rev);
                return head;
            }
            tail = temp;
            temp=temp->next;
        }
        
             tail->next = new Node(1);
             head= reverse(rev);
             return head;
        
    }
};