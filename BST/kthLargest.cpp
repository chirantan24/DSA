int nodes(Node* root)
    {
        if(root)
            return 1+nodes(root->left)+nodes(root->right);
        return 0;
    }
    int kthLargest(Node *root, int k)
    {
        int right=nodes(root->right);
        if(right==k-1)
        return root->data;
        else if(right>k-1)
        return kthLargest(root->right,k);
        else
        return kthLargest(root->left,k-right-1);
        //Your code here
    }
