Node* insertionSort(struct Node* head)
    {  //Take a random node for comparison
        struct Node* kuch_bhi=new Node(1000);
        while(head)
        {  //nxt will help head to move to next partition
            Node* nxt=head->next;
            Node* temp=kuch_bhi;
            while(temp->next && temp->next->data<head->data)
            {
                temp=temp->next;
            }
            head->next=temp->next;
            temp->next=head;
            head=nxt;
        }
        return kuch_bhi->next;
    }