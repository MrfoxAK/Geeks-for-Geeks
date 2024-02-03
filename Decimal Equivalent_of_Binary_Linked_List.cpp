/* Below global variable is declared in code for modulo arithmetic
const long long unsigned int MOD = 1000000007; */

/* Link list Node/
struct Node
{
    bool data;   // NOTE data is bool
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */

class Solution
{
    public:
        // Should return decimal equivalent modulo 1000000007 of binary linked list 
        long long unsigned int decimalValue(Node *head)
        {
            Node *temp = head;
            long long unsigned int ans = 0;
            while(temp)
            {
                ans = ans*2 + temp->data;
                ans = ans%MOD;
                temp = temp->next;
            }
            return ans;
           // Your Code Here
        }
};

