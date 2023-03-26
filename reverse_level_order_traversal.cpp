vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int>ans;
    stack<int>st;
    queue<Node*>q;
    q.push(root);
    
    if(root==NULL){
        return ans;
    }
    while(!q.empty()){
        Node *s=q.front();
        q.pop();
        st.push(s->data);
        if(s->right) q.push(s->right);
        if(s->left)  q.push(s->left);
        
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}