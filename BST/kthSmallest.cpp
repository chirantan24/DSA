int nodes(Node* root)
    {
        if(root)
            return 1+nodes(root->left)+nodes(root->right);
        return 0;
    }
    int KthSmallestElement(Node *root, int k)
    {
        if(root==NULL)
        return -1;
        int left=nodes(root->left);
        if(left==k-1)
        return root->data;
        else if(left<k-1)
        return KthSmallestElement(root->right,k-left-1);
        else
        return KthSmallestElement(root->left,k);
        //add code here.
    }
// TC : O(N)
// SC : O(N)
