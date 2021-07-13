map<int,pair<int,int>>m;
    void traverse(Node* root,int pos,int lev)
    {
        if(root==NULL)
        return;
        if(m[pos].first==0 || m[pos].second>lev)
        m[pos]={root->data,lev};
        traverse(root->left,pos-1,lev+1);
        traverse(root->right,pos+1,lev+1);
    }
    vector<int> topView(Node *root)
    {
        traverse(root,0,0);
        vector<int>v;
        for(auto i:m)
        v.push_back(i.second.first);
        return v;
        //Your code here
    }
