vector<int> leftView(Node *root)
{
    queue<Node*>q;
    Node* s=newNode(-1);
    q.push(s);
    q.push(root);
    if(root==NULL)
    return {};
    vector<int>ans;
    while(!q.empty())
    {
        Node* t=q.front();
        q.pop();
        if(q.empty())
        break;
        if(t->data==-1)
        {
            ans.push_back(q.front()->data);
            q.push(s);
            continue;
        }
        if(t->left)
        q.push(t->left);
        if(t->right)
        q.push(t->right);
    }
    return ans;
   // Your code here
}
