Node* binaryTreeToBST(Node* root,vector<int>&q)
    {
        if(root)
        {
            binaryTreeToBST(root->left,q);
            root->data=q.back();
            q.pop_back();
            binaryTreeToBST(root->right,q);
        }
    }
    void fill(Node* root,vector<int>&q)
    {
        if(root)
        {
            q.push_back(root->data);
            fill(root->left,q);
            fill(root->right,q);
        }
    }
    Node *binaryTreeToBST (Node *root)
    {
        vector<int>q;
        fill(root,q);
        sort(q.begin(),q.end(),greater<int>());
        binaryTreeToBST(root,q);
        return root;
        //Your code goes here
    }
