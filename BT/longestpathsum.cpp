int ans=0,h=0;
    int height(struct Node* node){
        if(node==NULL)
        return 0;
        return 1+max(height(node->left),height(node->right));
        // code here 
    }
    void helper(Node* root,int lev,int sum)
    {
        if(root)
        {
            if(lev==h && sum+root->data>ans)
            ans=sum+root->data;
            helper(root->left,lev+1,sum+root->data);
            helper(root->right,lev+1,sum+root->data);
        }
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        h=height(root);
        helper(root,1,0);
        return ans;
        //code here
    }
// TC: O(N)
// SC: O(H)

priority_queue<pair<int,int>>q;
    void helper(Node* root,int lev,int sum)
    {
        if(root)
        {
            q.push({lev,sum+root->data});
            helper(root->left,lev+1,sum+root->data);
            helper(root->right,lev+1,sum+root->data);
        }
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        helper(root,0,0);
        return q.top().second;
        //code here
    }
// TC: O(NlogN)
// SC: O(N)
