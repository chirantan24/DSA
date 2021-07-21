bool helper(Node* root,int min,int max)
{
    if(root && min==max)
    return 1;
    if(root)
    return helper(root->left,min,root->data-1) || helper(root->right,root->data+1,max);
    else 
    return 0;
}
bool isDeadEnd(Node *root)
{
    return helper(root,1,99999999);
    //Your code here
}
