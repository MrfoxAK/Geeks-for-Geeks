#include <stdio.h>
#include <stdlib.h>

struct node
{
     int data;
     struct node* next;
};

struct node* create_LL(struct node* head){
     struct node* new;
     struct node* temp;
     int c = 1;
     int data;
     while (c)
     {
          printf("Enter the data : ");
          new = (struct node*)malloc(sizeof(struct node));
          scanf("%d",&new->data);
          new->next = NULL;
          if (head == NULL)
          {
               head = temp = new;
          }
          else{
               temp->next = new;
               temp = new;
          }
          printf("Do u want to continue? 1/0 : ");
          scanf("%d",&c);
     }
     return head;
}

void display(struct node* head){
     struct  node* temp = head;
     while (temp!=NULL)
     {
          printf("%d->",temp->data);
          temp = temp->next;
     }
}

struct node * rev_linklist(struct node * head){
     struct node* temp = head;
     struct node* ptr = head;
     struct node* p = NULL;
     while (ptr!=NULL)
     {
          ptr=ptr->next;
          temp->next = p;
          p = temp;
          temp = ptr;
     }
     head = p;
     return head;
}

struct node* compute(struct node* head){
     head = rev_linklist(head);
     struct node* temp = head;
     while (temp->next!=NULL)
     {
          if(temp->data > temp->next->data){
               temp->next = temp->next->next;
               // temp = temp->next;
          }
          else{
               temp = temp->next;
          }
     }
     head = rev_linklist(head);
     return head;
}

int main()
{
     struct node* head = NULL;
     head = create_LL(head);
     display(head);
     printf("\nAfter removing duplicates.....\n");
     head = compute(head);
     
     display(head);
     return 0;
}