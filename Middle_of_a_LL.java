

/* Node of a linked list
 class Node {
   int data;
    Node next;
    Node(int d)  { data = d;  next = null; }
}
*/

class Solution {
    int getMiddle(Node head) {
        // Your code here.
int size=0;
        Node current=head;
        while(current!=null)
        {
            size++;
            current=current.next;
        }
       current=head;
       int mid=size/2;
       for(int i=0;i<mid;i++)
       {
           current=current.next;
       }
       return current.data;
    }
}