Node* deleteNode(Node* head, int key) 
{
    Node* t=head;
    if(t->data==key)
    {
        Node* p=head;
        while(p->next!=head)
        p=p->next;
        p->next=t->next;
        head=t->next;
    }
    else
    {
        while(t->data!=key)
        t=t->next;
        Node* p=head;
        while(p->next!=t)
        p=p->next;
        p->next=t->next;
    }
   // Your code here
}
