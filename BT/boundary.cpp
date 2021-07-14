void traverse(vector<int>&s,Node* root)
    {
        if(root==NULL)
        return ;
        if(root->left==NULL && root->right==NULL)
        s.push_back(root->data);
        traverse(s,root->left);
        traverse(s,root->right);
    }
    void right(vector<int>&s,Node* root)
    {
        if(root==NULL)
        return;
        if(root->right)
        right(s,root->right);
        else if(root->left)
        right(s,root->left);
        if(root->left || root->right)
        s.push_back(root->data);
    }
    vector <int> printBoundary(Node *root)
    {
        vector<int>s;
        s.push_back(root->data);
        Node* curr=root->left;
        while(curr)
        {
            if(curr->right || curr->left)
            s.push_back(curr->data);
            if(curr->left)
            curr=curr->left;
            else if(curr->right)
            curr=curr->right;
            else
            break;
        }
        traverse(s,root);
        right(s,root->right);
        return s;
        //Your code here
    }
