#include <stdio.h>
#include <stdlib.h>

struct node
{
     int data;
     struct node* next;
};

void display(struct node* head){
     struct node*ptr=head;
     while (ptr!=NULL)
     {
          printf("%d->",ptr->data);
          ptr=ptr->next;
     }
     printf("NULL\n");
}

struct node* create_LL(struct node * head){
     struct node * temp=NULL;
     struct node * new;
     int c=1;
     while (c)
     {
          new = (struct node*)malloc(sizeof(struct node));
          new->next=NULL;
          printf("Enter data: ");
          scanf("%d",&new->data);
          if (head==NULL)
          {
               head = temp = new;
          }
          else{
               temp->next = new;
               temp = new;
          }
          printf("Enter 0 for break & 1 for continue: ");
          scanf("%d",&c);
     }
     return head;
}

struct node* del_Mid_of_LL(struct node* head){
     int total_node = 0;
     int n = 0;
     struct node*ptr=head;
     struct node*temp=head;
     struct node*next=head;
     while (ptr!=NULL)
     {
          total_node += 1;
          ptr=ptr->next;
     }
     // printf("The total Node is %d\n",total_node);
     n = total_node/2+1;
     // printf("The N is %d\n",n);
     int i = 1;
     while (i<n-1)
     {
          temp = temp->next;
          i++;
     }
     temp->next = temp->next->next;
     return head;
}

int main()
{
     struct node * head=NULL;
     head = create_LL(head);
     display(head);
     del_Mid_of_LL(head);
     printf("After Removing mid of the LL\n");
     display(head);
     return 0;
}