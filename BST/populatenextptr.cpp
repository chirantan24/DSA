 Node* next=NULL;
    void populateNext(Node *root)
    {
        if(root)
        {
            populateNext(root->right);
            root->next=next;
            next=root;
            populateNext(root->left);
        }
        //code here
    }
