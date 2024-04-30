/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    struct Node* rev(struct Node* n1)
    {
        Node* curr=n1;
        Node* prev=NULL;
        while(curr)
        {
            Node* nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        return prev;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        // code here
         while(num1 && num1->data==0 )
        {
            num1=num1->next;
        }
        while(num2 && num2->data==0)
        {
            num2=num2->next;
        }
        if(num1==NULL && num2==NULL)
        {
            Node *y=new Node(0);
            return y;
        }
        Node* n1=rev(num1);
        Node* n2=rev(num2);
        Node* dummy=new Node(0);
        Node* d1=dummy;
        int dig1,dig2,carry=0,sum;
        while(n1||n2||carry)
        {
            if(n1==NULL)
            {
                dig1=0;
            }
            else
            {
                dig1=n1->data;
            }
            if(n2==NULL)
            {
                dig2=0;
            }
            else
            {
                dig2=n2->data;
            }
            sum=dig1+dig2+carry;
            carry=sum/10;
            sum=sum%10;
            Node* new1=new Node(sum);
            d1->next=new1;
            d1=d1->next;
            if(n1!=NULL)
            {
                n1=n1->next;
            }
            if(n2!=NULL)
            {
                n2=n2->next;
            }
        }
        return rev(dummy->next);
    }
};