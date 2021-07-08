class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if(head==NULL)
        return head;
        Node* curr=head->next,*prev=NULL;
        while(curr)
        {
            head->next=prev;
            prev=head;
            head=curr;
            curr=curr->next;
        }
        head->next=prev;
        return head;
    }
};
