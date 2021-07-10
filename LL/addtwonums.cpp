class Solution
{
    public:
    int add(Node* head1,Node* head2)
    {
        if(head1->next==NULL)
        {
            int t=head1->data+head2->data;
            head1->data=t%10;
            return t/10;
        }
        int t=head1->data + head2->data+ add(head1->next,head2->next);
        head1->data=t%10;
        return t/10;
    }
    int add(Node* head,int k,Node* tail)
    {
        if(head==tail)
        return k;
        if(head->next==tail)
        {
            int t=head->data+k;
            head->data=t%10;
            return t/10;
        }
        int t=head->data+add(head->next,k,tail);
        head->data=t%10;
        return t/10;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        int s1=0,s2=0;
        Node* t=first;
        while(t)
        t=t->next,s1++;
        t=second;
        while(t)
        t=t->next,s2++;
        Node* p;
        if(s1<s2)
        {
            t=second,p=first;
            while(s2-s1)
            t=t->next,s2--;
        }
        else
        {
            t=first,p=second;
            while(s1-s2)
            t=t->next,s1--;
        }
        int c=add(t,p);
        Node* temp;
        if(p==first)
        {
            c=add(second,c,t);
            if(c)
            {
                temp=new Node(c);
                temp->next=second;
            }
            else 
            temp=second;
        }
        else
        {
            c=add(first,c,t);
            if(c)
            {
                temp=new Node(c);
                temp->next=first;
            }
            else 
            temp=first;
        }
        
        return temp;
        
        // code here
    }
};
