void mirror(Node* root1,Node* root2)
    {
        if(root1==NULL)
        return;
        if(root2==NULL)
            root2=newNode(root1->data);
        mirror(root1->left,root2->right);
        mirror(root1->right,root2->left);
    }
