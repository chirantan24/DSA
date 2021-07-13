vector <int> zigZagTraversal(Node* root)
{
    queue<int>p;
    stack<int>s;
    queue<Node*>q;
    q.push(root);
    Node* a=new Node(-1);
    q.push(a);
    bool f=0;
    vector<int>v;
    while(!q.empty())
    {
        Node* t=q.front();
        q.pop();
         if(t->data==-1)
        {
            if(f)
            {
                while(!s.empty())
                {
                    v.push_back(s.top());
                    s.pop();
                }
            }
            else
            {
                while(!p.empty())
                {
                    v.push_back(p.front());
                    p.pop();
                }
            }
            f=!f;
            if(q.empty())
            break;
            q.push(a);
            continue;
        }
        if(f)
        s.push(t->data);
        else
        p.push(t->data);
        if(t->left)
        q.push(t->left);
        if(t->right)
        q.push(t->right);
    }
    return v;
	// Code here
}
