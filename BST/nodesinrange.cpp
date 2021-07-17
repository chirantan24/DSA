void helper(Node* root,int l,int h,int &c)
{
    if(root)
    {
        if(root->data>=l && root->data<=h)
        {
            c++;
            helper(root->left,l,h,c);
            helper(root->right,l,h,c);
        }
        else if(root->data<l)
        helper(root->right,l,h,c);
        else
        helper(root->left,l,h,c);
    }
}
int getCount(Node *root, int l, int h)
{
    int c=0;
    helper(root,l,h,c);
    return c;
  // your code goes here   
}
