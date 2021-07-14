int traverse(Node* root)
    {
        if(root==NULL)
        return 0;
        int t=root->data;
        root->data=0;
        if(root->left)
        root->data+=traverse(root->left);
        if(root->right)
        root->data+=traverse(root->right);
        return t+root->data;
    }
    void toSumTree(Node *node)
    {
        node->data=traverse(node->left)+traverse(node->right);
        // Your code here
    }
