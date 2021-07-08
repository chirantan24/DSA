class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        int count =0;
        node* curr=head,*prev=NULL;
        stack<node*>s;
        while(curr)
        {
        count=0;    
        while(count<k && curr)
        {
            s.push(curr);
            curr=curr->next;
            count++;
        }
        while(!s.empty())
        {
            if(prev)
            {
                prev->next=s.top();
                prev=prev->next;
                s.pop();
            }
            else
            {
                prev=s.top();
                head=prev;
                s.pop();
            }
        }
        }
        prev->next=NULL;
        return head;
    }
};
