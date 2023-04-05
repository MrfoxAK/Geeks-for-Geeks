

//User function Template for Java

/*
class Node
{
    int data;
    Node left;
    Node right;
    Node(int data)
    {
        this.data = data;
        left=null;
        right=null;
    }
}
*/
class Solution{

     ArrayList<Integer> list = new ArrayList<>();

    public int kthLargest(Node root,int K){

        if(root == null) return 0;

        check (root);

        return list.get(list.size()-K);

    }   

    void check(Node root){

        if(root == null) return;

        check(root.left);

        list.add(root.data);

        check(root.right);

    } }