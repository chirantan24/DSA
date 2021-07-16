bool check_BST(Node* root,int min,int max)
    {
        if(root)
        {
            if(root->data<min || root->data>max)
            return 0;
            return check_BST(root->left,min,root->data-1)&&check_BST(root->right,root->data+1,max);
        }
        return 1;
    }
    bool isBST(Node* root) 
    {
        return check_BST(root,INT_MIN,INT_MAX);
        // Your code here
    }
