int nodes(Node* root)
    {
        if(root)
            return 1+nodes(root->left)+nodes(root->right);
        return 0;
    }
    int KthSmallestElement(Node *root, int k)
    {
        if(root==NULL)
        return -1;
        int left=nodes(root->left);
        if(left==k-1)
        return root->data;
        else if(left<k-1)
        return KthSmallestElement(root->right,k-left-1);
        else
        return KthSmallestElement(root->left,k);
        //add code here.
    }
// TC : O(N)
// SC : O(N)

int KthSmallestElement(Node *root, int k)
    {
        Node* curr=root,*pre;
        int count=0;
        int ans=-1;
        while(curr)
        {
            if(curr->left==NULL)
            {
                count++;
                if(count==k)
                    ans=curr->data;
                curr=curr->right;
            }
            else
            {
                pre=curr->left;
                while(pre->right!=NULL && pre->right!=curr)
                pre=pre->right;
                if(pre->right==NULL)
                {
                    pre->right=curr;
                    curr=curr->left;
                }
                else
                {
                    pre->right=NULL;
                    count++;
                    if(count==k)
                        ans=curr->data;
                    curr=curr->right;
                }
            }
        }
        return ans;
        //add code here.
    }
// Morris Inorder Traversal
// TC : O(N)
// SC : O(1)
