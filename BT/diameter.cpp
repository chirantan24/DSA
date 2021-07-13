int ans=1;
    int get(Node* root)
    {
        if(root==NULL)
        return 0;
        int l=get(root->left),r=get(root->right);
        ans=max(ans,l+r+1);
        return max(l,r)+1;
    }
    int diameter(Node* root) {
        get(root);
        return ans;
        // Your code here
    }
