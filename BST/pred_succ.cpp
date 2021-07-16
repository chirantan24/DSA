void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    if(root)
    {
        if(root->key<key)
        {
            if(pre==NULL)
            pre=root;
            else if(pre->key<root->key)
            pre=root;
        }
        if(root->key>key)
        {
            if(suc==NULL)
            suc=root;
            else if(suc->key>root->key)
            suc=root;
        }
        findPreSuc(root->left,pre,suc,key);
        findPreSuc(root->right,pre,suc,key);
    }
// Your code goes here
}
