/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
public:
     Node *compute(Node *head)
     {
          // your code goes here
          Node *curr = head;
          while (curr->next)
          {
               if (curr->data < curr->next->data)
               {
                    curr->data = curr->next->data;
                    Node *temp = curr->next;
                    curr->next = curr->next->next;
                    delete temp;
                    curr = head;
               }
               else
                    curr = curr->next;
          }
          return head;
     }
};
