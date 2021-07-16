TreeNode* findleft(TreeNode* root)
    {
        if(root)
        {
            if(root->right)
            return findleft(root->right);
            else
            return root;
        }
        return NULL;
    }
    TreeNode* findright(TreeNode* root)
    {
        if(root)
        {
            if(root->left)
                return findright(root->left);
            else
                return root;
        }
        return NULL;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
            if(root==NULL)
                return NULL;
            if(root->val==key)
            {
                if(root->left==NULL && root->right==NULL)
                return NULL;
                TreeNode* max=findleft(root->left);
                if(max==NULL)
                    max=findright(root->right);
                if(max==NULL)
                    return NULL;
                root->val=max->val;
                if(root->left)
                root->left=deleteNode(root->left,max->val);
                else
                root->right=deleteNode(root->right,max->val);
                return root;
            }
            if(root->val<key)
            root->right=deleteNode(root->right,key);
            else
            root->left=deleteNode(root->left,key);
            return root;
    }
