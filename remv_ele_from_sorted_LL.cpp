

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 // your code goes here
    Node* curr=head;
    while(curr->next){
        if(curr->data==curr->next->data){
            curr->next=curr->next->next; // agar same hua to skip kr do 
        }
        else{
            curr=curr->next;
        }
    }
    return head;
}