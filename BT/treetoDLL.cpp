Node* convert(Node* &head,Node* &tail,Node* curr)
    {
        if(curr==NULL)
        return curr;
        
        convert(head,tail,curr->left);
        if(head==NULL)
        {
            head=curr;
            tail=curr;
        }
        else
        {
            tail->right=curr;
            curr->left=tail;
            tail=tail->right;
        }
        convert(head,tail,curr->right);
    }
    Node * bToDLL(Node *root)
    {
        Node* head=NULL,*tail=NULL;
        convert(head,tail,root);
        return head;
        // your code here
    }
