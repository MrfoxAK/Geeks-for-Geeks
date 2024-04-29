/* Link list Node 

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

/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */

class Solution {
    public:
    Node* deleteK(Node *head,int k){
       if (head == NULL || k==1) {
        return NULL;
    }
      Node* prev = NULL;
      Node* cur = head;
      Node* nxt = head->next;
      int cnt = 1;
      while(cur != NULL)
      {
          if(cnt % k == 0){
              prev->next = nxt;
              cnt++;
              cur = nxt;
              if(cur != NULL) nxt = cur->next;
              continue;
          }
          prev = cur;
          cur = nxt;
          if(nxt != NULL) nxt = nxt->next;
          cnt++;
      }
      return head;
        
    }
};