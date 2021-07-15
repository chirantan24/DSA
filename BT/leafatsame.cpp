class Solution{
  public:
    /*You are required to complete this method*/
    int l=0;
    int height(struct Node* node){
        if(node==NULL)
        return 0;
        return 1+max(height(node->left),height(node->right));
        // code here 
    }
    bool helper(Node* root,int lev)
    {
        if(root==NULL)
        return 1;
        if(root->left==NULL && root->right==NULL)
        return (lev==l);
        return helper(root->left,lev+1) & helper(root->right,lev+1);
    }
    bool check(Node *root)
    {
        l=height(root);
        return helper(root,1);
        //Your code here
    }
};
