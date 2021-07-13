map<int,pair<vector<int>,int>>m;
    void traverse(Node* root,int pos,int lev)
    {
        if(root==NULL)
        return;
        if(m[pos].second<lev)
        m[pos]={{root->data},lev};
        else if(m[pos].second==lev)
        m[pos].first.push_back(root->data);
        traverse(root->left,pos-1,lev+1);
        traverse(root->right,pos+1,lev+1);
    }
    vector <int> bottomView(Node *root) {
        traverse(root,0,0);
        vector<int>v;
        for(auto i:m)
        v.push_back(i.second.first.back());
        return v;
    }
