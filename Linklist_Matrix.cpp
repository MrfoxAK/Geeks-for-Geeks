

/*structure of the node of the linked list is as

struct Node
{
	int data;
	Node* right, *down;
	
	Node(int x){
	    data = x;
	    right = NULL;
	    down = NULL;
	}
};
*/
// n is the size of the matrix
// function must return the pointer to the first element 
// of the in linked list i.e. that should be the element at arr[0][0]
Node* constructLinkedMatrix(int mat[MAX][MAX], int n)
{
    // code here
    Node* head = new Node(mat[0][0]);
    Node* temp = head;
    
    for(int i=0;i<n;i++)
    {
        Node* temp2 = temp;
        for(int j=0;j<n;j++)
        {
            if(j+1 == n)
                temp->right = NULL;
            else
                temp->right = new Node(mat[i][j+1]);
            if(i+1 == n)
                temp->down = NULL;
            else
                temp->down = new Node(mat[i+1][j]);
            temp = temp->right;    
        }
        temp = temp2;
        temp = temp->down;
    }
    return head;
}