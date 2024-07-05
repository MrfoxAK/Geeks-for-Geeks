int verticalWidth(Node *root)
{
    if (!root)
        return 0;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    unordered_map<int, int> mp;
    while (!q.empty())
    {
        Node *tmp = q.front().first;
        int level = q.front().second;
        q.pop();
        mp[level] = tmp->data;
        if (tmp->left)
        {
            q.push({tmp->left, level - 1});
        }
        if (tmp->right)
        {
            q.push({tmp->right, level + 1});
        }
    }
    return mp.size();
}