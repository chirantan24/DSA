vector<int> reverseLevelOrder(Node *root)
{
        queue<Node*>q;
        stack<int>v;
        q.push(root);
        Node* s=newNode(-1);
        q.push(s);
        vector<int>temp;
        while(!q.empty())
        {
            Node* t=q.front();
            q.pop();
            if(q.empty())
            break;
            if(t->data==-1)
            {
                q.push(s);
                continue;
            }
            v.push(t->data);
            if(t->right)
            q.push(t->right);
            
            if(t->left)
            q.push(t->left);
        }
        while(!v.empty())
        {
            temp.push_back(v.top());
            v.pop();
        }
        return temp;
    // code here
}
