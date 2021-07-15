class Solution
{
    public:
    int sum(Node* root)
    {
        if(root==NULL)
        return 0;
        if(root->left==NULL && root->right==NULL)
        {
            int t=root->data;
            root->data=0;
            return t;
        }
        int l=sum(root->left),r=sum(root->right),t=root->data;
        root->data-=(l+r);
        return l+r+t;
    }
    bool helper(Node* root)
    {
        if(root)
        {
            if(root->data)
            return 0;
            else
            return 1;
        }
        return 1;
    }
    bool isSumTree(Node* root)
    {
        root->data-=sum(root->left)+sum(root->right);
        return helper(root);
         // Your code here
    }
};
