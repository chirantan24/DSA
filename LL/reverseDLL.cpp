Node* reverseDLL(Node * head)
{
    if(head==NULL || head->next==NULL)
    return head;
    Node* curr=head->next,*prev=NULL;
    while(curr)
    {
        curr->prev=curr->next;
        curr->next=head;
        head->next=prev;
        head->prev=curr;
        prev=head;
        head=curr;
        curr=curr->prev;
    }
    return head;
    //Your code here
}
