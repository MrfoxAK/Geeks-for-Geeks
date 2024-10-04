class Solution
{
public:
     // Function to reverse a circular linked list
     Node *reverse(Node *head)
     {
          // code here
          Node *s, *curr, *temp, *prev;
          curr = head;
          temp = prev = NULL;
          do
          {
               temp = curr->next;
               curr->next = prev;
               prev = curr;
               curr = temp;
          } while (curr != head);

          head->next = prev;
          head = prev;

          return head;
     }

     // Function to delete a node from the circular linked list
     Node *deleteNode(Node *head, int key)
     {
          Node *p, *s;

          p = head;
          if (p->data == key)
          {
               s = head;
               while (s->next != head)
               {
                    s = s->next;
               }
               s->next = p->next;
               p = s->next;
               head = p;
               return head;
          }
          else
          {
               p = head;
               bool found = false;

               while (p->next != head)
               {
                    if (p->next->data == key)
                    {
                         found = true;
                         break;
                    }
                    p = p->next;
               }

               if (found)
               {
                    p->next = (p->next)->next;
                    return head;
               }
               else
               {
                    return head;
               }
          }
     }
};