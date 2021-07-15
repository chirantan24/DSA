bool isIsomorphic(Node *root1,Node *root2)
    {
        if(root1 && root2 && root1->data==root2->data)
        return (isIsomorphic(root1->left,root2->left)&&isIsomorphic(root1->right,root2->right))||
        (isIsomorphic(root1->left,root2->right)&&isIsomorphic(root1->right,root2->left));
        if(root1==NULL && root2==NULL)
        return 1;
        return 0;
    //add code here.
    }
