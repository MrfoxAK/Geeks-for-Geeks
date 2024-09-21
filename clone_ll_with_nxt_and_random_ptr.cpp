/* Link list Node
struct Node {
    int data;
    Node *next;
    Node *random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};*/

class Solution
{

public:
     Node *copyList(Node *head)
     {

          // Step 1: Attach clone nodes in between the nodes
          Node *cur = head;
          while (cur)
          {
               Node *cloneNode = new Node(cur->data);
               Node *temp = cur->next;
               cur->next = cloneNode;
               cloneNode->next = temp;
               cur = cur->next->next;
          }

          // Step 2: Attach the random pointers
          cur = head;
          while (cur)
          {
               if (cur->random)
                    cur->next->random = cur->random->next;
               cur = cur->next->next;
          }

          // Step 3: Attach the next pointers
          Node *clone = new Node(-1);
          cur = head;
          Node *temp = clone;
          while (cur)
          {
               temp->next = cur->next;
               cur->next = cur->next->next;
               temp = temp->next;
               cur = cur->next;
          }

          return clone->next;
     }
};