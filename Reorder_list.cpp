/* Following is the Linked list node structure */

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

class Solution{ 

public:

    Node* findmiddle(Node *head){

   

    Node *slow=head,*fast=head;

        while(fast != NULL && fast->next != NULL){

            slow=slow->next;

            fast=fast->next->next;

        }

        

    return slow;

    }

    

    Node* reverse(Node* mid){

        Node *prev=NULL;

        Node *curr=mid;

        while(curr != NULL){

            Node *next=curr->next;

            curr->next=prev;

            prev=curr;

            curr=next;

        }

        return prev;

    }

    void reorderList(Node* head) {

         if(head == NULL || head->next == NULL)return;

        Node* mid=findmiddle(head);

        Node* last=reverse(mid);

        Node* iter=head;

        

        while(iter->next != mid && last->next != NULL){

 

            

        Node *temp=iter->next;

            iter->next=last;

            Node *another=last->next;

            last->next=temp;

            iter=temp;

            last=another;
        }
        iter->next=last;


    }

    

};