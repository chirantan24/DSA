#define ff first
#define ss second
int m=1;  
pair<int,pair<int,int>> helper(Node* root)
{
    if(root)
    {
        if(root->left==NULL &&root->right==NULL)
            return {1,{root->data,root->data}};
        pair<int,pair<int,int>> l=helper(root->left);
        pair<int,pair<int,int>> r=helper(root->right);
        if(root->left && l.ff)
        {
            if(root->right && r.ff && l.ss.ss<root->data && r.ss.ff>root->data)
            {
                m=max(m,l.ff+r.ff+1);
                return {l.ff+r.ff+1,{l.ss.ff,r.ss.ss}};
            }
            else if(root->right || l.ss.ss>=root->data)
            return {0,{l.ss.ff,r.ss.ss}};
            else
            {
                m=max(m,l.ff+r.ff+1);
                return {l.ff+r.ff+1,{l.ss.ff,root->data}};
            }
        }
        else if(root->left || !r.ff || root->data>=r.ss.ff)
        return {0,{l.ss.ff,r.ss.ff}};
        else
        {
            m=max(m,l.ff+r.ff+1);
            return {l.ff+r.ff+1,{root->data,r.ss.ss}};
        }
    }
}
int largestBst(Node *root)
{
    m=1;
    helper(root);
    return m;
	//Your code here
}
