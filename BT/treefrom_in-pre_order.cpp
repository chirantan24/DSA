Node* build(Node* root,int si,int ei,int sp,int ep,int in[],int pre[])
    {
        if(si>ei)
        return NULL;
        int i=si;
        for(;i<=ei;i++)
        if(in[i]==pre[sp])
        break;
        root=new Node(in[i]);
        root->left=build(root->left,si,i-1,sp+1,sp+(i-si),in,pre);
        root->right=build(root->right,i+1,ei,sp+(i-si)+1,ep,in,pre);
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        Node* root;
        root=build(root,0,n-1,0,n-1,in,pre);
        return root;
        // Code here
    }
