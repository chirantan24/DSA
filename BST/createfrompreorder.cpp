Node* helper(int pre[],Node* root,int &i,int min,int max,int n)
{
    if(i==n)
    return NULL;
    if(pre[i]>=min  && pre[i]<=max)
    root=newNode(pre[i++]);
    else
    return root=NULL;
    root->left=helper(pre,root->left,i,min,root->data-1,n);
    root->right=helper(pre,root->right,i,root->data-1,max,n);
    return root;
}
Node* constructTree(int pre[], int size)
{
    int i=0;
    Node* root=NULL;
    return helper(pre,root,i,-99999,99999,size);
    //code here
}
