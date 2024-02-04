Node* rev(Node* head){
        Node* n=head;
        Node* c=head;
        Node* p=NULL;    
        
        while(n!=NULL){
            n=n->next;
            c->next=p;
            p=c;
            c=n;
            
        }    
        return(p);    
    }
    
    int leng(Node* head){
        if(head==NULL)
            return(0);
        return(1+leng(head->next));
        
    }
    int ish2_big(Node* head1,Node* head2){
        if(head1==NULL && head2==NULL)   
            return(2);
        if(head1->data > head2->data)
            return(0);
        if(head1->data < head2->data)
            return(1);
    
        return(ish2_big(head1->next,head2->next));
        
    }
    
    
    Node* subLinkedList(Node* head1, Node* head2) {
        
        while(head1!=NULL && head1->data == 0){
            head1=head1->next;
            
        }
        while(head2!=NULL && head2->data == 0){
            head2=head2->next;
            
        }
        
        if(head1==NULL && head2==NULL){
            LinkedList o2;    
            o2.insert(0);
            return(o2.head);
        }
        
        if(head1==NULL)
            return(head2);
        if(head2==NULL)
            return(head1);    
        
        int l1=leng(head1);
        int l2=leng(head2);
        
        if(l1<l2){
            Node* t=head1;
            head1=head2;
            head2=t;
        }
        else if(l1==l2){
            if(ish2_big(head1,head2)==1){
                Node* t=head1;
                head1=head2;
                head2=t;   
            }
            else if(ish2_big(head1,head2)==2){
                LinkedList o1;        
                o1.insert(0);
                return(o1.head);
            }
        }
            
        
        
        head1=rev(head1);
        head2=rev(head2);
        
        LinkedList ans;
        
        while(head2!=NULL){
            if(head1->data >= head2->data){
                int t=(head1->data)-(head2->data);
                ans.insert(t);
            }
            else{
                head1->data=head1->data + 10;
                int t=(head1->data)-(head2->data);
                ans.insert(t);
                Node* aa=head1->next;
                if(aa->data!=0)
                    aa->data=(aa->data) - 1;
                else{
                    while(aa->data ==0 ){
                        aa->data=9;
                        aa=aa->next;
                    }
                    aa->data=(aa->data) - 1;
                    
                    
                }
                
                
            }
            
            
            head1=head1->next;
            head2=head2->next;    
        }
        
        while(head1!=NULL){
            ans.insert(head1->data);
            head1=head1->next;
            
        }
        
        
        Node* head=rev(ans.head);
        while(head && head->data==0){
            head=head->next;
            
        }        
        
        return(head);

    }