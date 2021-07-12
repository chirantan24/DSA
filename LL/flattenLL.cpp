Node* merge(Node* head1,Node* head2)
{
    Node* head=NULL,*curr=NULL;
    while(head1 && head2)
    {
        if(head1->data<head2->data)
        {
            if(head==NULL)
            {
                head=head1;
                curr=head;
            }
            else
            {
                curr->bottom=head1;
                curr=curr->bottom;
            }
            head1=head1->bottom;
        }
        else
        {
            if(head==NULL)
            {
                head=head2;
                curr=head;
            }
            else
            {
                curr->bottom=head2;
                curr=curr->bottom;
            }
            head2=head2->bottom;
        }
    }
    while(head1)
    {
        curr->bottom=head1;
        curr=curr->bottom;
        head1=head1->bottom;
    }
    while(head2)
    {
        curr->bottom=head2;
        curr=curr->bottom;
        head2=head2->bottom;
    }
    return head;
}
Node *flatten(Node *root)
{
    if(root->next)
    return merge(root,flatten(root->next));
    else 
    return root;
   // Your code here
}
