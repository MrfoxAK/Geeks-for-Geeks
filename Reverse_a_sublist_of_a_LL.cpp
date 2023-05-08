// User function Template for C++

/*Link list node
struct Node {
     int data;
     struct Node *next;
     Node(int x) {
          data = x;
          next = NULL;
     }
};*/

class Solution
{
public:
     Node *reverse(Node *head)
     {
          Node *prev, *curr, *nex;
          prev = nex = NULL;
          curr = head;

          while (curr)
          {
               nex = curr->next;
               curr->next = prev;
               prev = curr;
               curr = nex;
          }

          head = prev;
          prev = NULL;

          return head;
     }

     Node *reverseBetween(Node *head, int m, int n)
     {
          Node *a, *b, *c, *p, *q;
          a = p = head;

          if (m == 1)
          {
               a = p = head;

               for (int i = 1; i < n; i++)
               {
                    p = p->next;
               }

               b = p->next;
               p->next = NULL;

               p = a;

               a = reverse(a);
               p->next = b;

               head = a;

               a = b = p = NULL;

               return head;
          }

          for (int i = 1; i < m - 1; i++)
          {
               p = p->next;
          }

          b = q = p->next;
          p->next = NULL;

          for (int i = 0; i < n - m; i++)
          {
               q = q->next;
          }

          c = q->next;
          q->next = NULL;

          q = b;

          b = reverse(b);

          p->next = b;
          q->next = c;

          a = b = c = p = q = NULL;

          return head;
     }
};