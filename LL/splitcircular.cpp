void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    if(head== NULL || head->next==head)
    {
        *head1_ref=head;
        head2_ref=NULL;
        return;
    }
    Node* sp=head->next,*fp=head->next->next;
    while(fp!=head && fp->next!=head)
    {
        sp=sp->next;
        fp=fp->next->next;
    }
    if(fp->next==head)
    sp=sp->next;
    Node* t=head;
    while(t->next!=sp)
    t=t->next;
    t->next=head;
    t=sp;
    while(t->next!=head)
    t=t->next;
    t->next=sp;
    *head1_ref=head;
    *head2_ref=sp;
    // your code goes here
}
