class Solution
{
    public:
    int add(Node* head)
    {
        if(head->next==NULL)
        {
            int t=head->data+1;
            head->data=t%10;
            return t/10;
        }
        int t=head->data+add(head->next);
        head->data=t%10;
        return t/10;
    }
    Node* addOne(Node *head) 
    {
        int c=add(head);
        if(c)
        {
            Node* t=new Node(c);
            t->next=head;
            head=t;
        }
        return head;
        // Your Code here
        // return head of list after adding one
    }
};
