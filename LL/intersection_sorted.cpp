Node* findIntersection(Node* head1, Node* head2)
{
    Node* head=NULL,*curr=NULL;
    Node* a=head1,*b=head2;
    while(a && b)
    {
        if(a->data<b->data)
        a=a->next;
        else if(a->data>b->data)
        b=b->next;
        else
        {
            if(head)
            {
                curr->next=new Node(a->data);
                curr=curr->next;
            }
            else
            {
                head=new Node(a->data);
                curr=head;
            }
            a=a->next;
            b=b->next;
        }
    }
    return head;
    // Your Code Here
}
