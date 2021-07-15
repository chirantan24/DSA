class Solution {
  public:
    /*This function returns true if the tree contains 
    a duplicate subtree of size 2 or more else returns false*/
    map<int,set<pair<int,int>>>m;
    int dupSub(Node *root) {
        if(root==NULL)
        return 0;
        if(root->left==NULL && root->right==NULL)
        return 0;
        if(root->left && root->left->left==NULL && root->left->right==NULL)
        {
            if(!root->right || (root->right->left==NULL && root->right->right==NULL))
            {
                int l=(root->left)?(root->left->data):-1;
                int r=(root->right)?(root->right->data):-1;
                auto it=m[root->data];
                pair<int,int>p={l,r};
                if(it.empty())
                m[root->data].insert(p);
                else if(it.find(p)!=it.end())
                return 1;
                else
                m[root->data].insert(p);
                return 0;
            }
        }
        else if(root->right && root->right->left==NULL && root->right->right==NULL)
        {
            if(!root->left || (root->left->left==NULL && root->left->right==NULL))
            {
                int l=(root->left)?(root->left->data):-1;
                int r=(root->right)?(root->right->data):-1;
                auto it=m[root->data];
                pair<int,int>p={l,r};
                if(it.empty())
                m[root->data].insert(p);
                else if(it.find(p)!=it.end())
                return 1;
                else
                m[root->data].insert(p);
                return 0;
            }
        }
        return dupSub(root->left) || dupSub(root->right);
         // code here
    }
};
