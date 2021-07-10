Node *move(Node *head)
{
    Node* curr=head;
    while(curr && curr->next && curr->next->next)
        curr=curr->next;
    curr->next->next=head;
    curr->next=NULL;
    return head;
 // your code goes here
}
