Node* lca(Node* root ,int n1 ,int n2 )
    {
        if(root)
        {
            Node* left=lca(root->left,n1,n2);
            Node* right=lca(root->right,n1,n2);
            if(!left || !right)
            return (root->data==n1||root->data==n2)?root:(left)?left:right;
            
            return root;
        }
        return NULL;
       //Your code here 
    }
    int dist(Node* root,int k,int lev)
    {
        if(root)
        {
            if(root->data==k)
            return lev;
            int l=dist(root->left,k,lev+1);
            (l==-1)?dist(root->right,k,lev+1):l;
        }
        return -1;
    }
int findDist(Node* root, int a, int b) {
    Node* LCA=lca(root,a,b);
    if(LCA->data==a)
        return dist(LCA,b);
    if(LCA->data==b)
        return dist(LCA,a);
    return dist(LCA,a)+dist(LCA,b);
    // Your code here
}
// 2-3 traversals

