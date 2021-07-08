class Solution
{
    public:
    //Function to check if the linked list has a loop.
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
};
