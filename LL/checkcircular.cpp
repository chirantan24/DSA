bool isCircular(Node *head)
{
    Node* c=head->next;
    while(1)
    {
        if(c==head)
        return 1;
        if(c==NULL)
        return 0;
        c=c->next;
    }
   // Your code here
}
