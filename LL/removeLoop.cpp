class Solution
{
    public:
    //Function to remove a loop in the linked list.
    Node* Floyd(Node* head)
    {
        Node* sp=head,*fp=head;
        sp=sp->next;
        fp=fp->next->next;
        while(sp!=fp)
        {
            sp=sp->next;
            fp=fp->next->next;
        }
        sp=head;
        while(sp!=fp)
        {
            sp=sp->next;
            fp=fp->next;
        }
        return sp;
    }
     bool detectLoop(Node* head)
    {
        Node* sp=head,*fp=head;
        while(fp && fp->next)
        {
            sp=sp->next;
            fp=fp->next->next;
            if(sp==fp)
            return 1;
        }
        return 0;
    }
    void removeLoop(Node* head)
    {
        if(detectLoop(head)==0)
        return;
        Node* loop=Floyd(head);
        Node* t=loop;
        while(t->next!=loop)
        t=t->next;
        t->next=NULL;
    }
};
