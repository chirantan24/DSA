vector<int> rightView(Node *root)
    {
           queue<Node*>q;
    
    q.push(root);
    Node* s=newNode(-1);
    q.push(s);
    if(root==NULL)
    return {};
    vector<int>ans;
    while(!q.empty())
    {
        Node* t=q.front();
        q.pop();
        if(q.empty())
        break;
        if(q.front()->data==-1)
        ans.push_back(t->data);
        if(t->data==-1)
        {
            q.push(s);
            continue;
        }
        if(t->left)
        q.push(t->left);
        if(t->right)
        q.push(t->right);
    }
    return ans;
       // Your Code here
    }
