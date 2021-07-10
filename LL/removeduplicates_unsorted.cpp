class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        if(head->next==NULL)
        return head;
        Node* curr=head->next,*prev=head;
        unordered_set<int>s;
        s.insert(head->data);
        while(curr)
        {
            if(s.find(curr->data)==s.end())
            s.insert(curr->data),prev=prev->next;
            else
            prev->next=curr->next;
            curr=curr->next;
        }
        return head;
     // your code goes here
    }
};
