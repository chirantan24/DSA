class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* merge(Node* head1,Node* head2)
    {
    Node* a=head1,*b=head2;
    Node* head=NULL,*curr=NULL;
    while(a && b)
    {
        if(a->data<b->data)
        {
            if(head)
            {
                curr->next=new Node(a->data);
                curr=curr->next;
            }
            else
            {
                head=new Node(a->data);
                curr=head;
            }
            a=a->next;
        }
        else
        {
            if(head)
            {
                curr->next=new Node(b->data);
                curr=curr->next;
            }
            else
            {
                head=new Node(b->data);
                curr=head;
            }
            b=b->next;
        }
    }
    while(a)
    {
        curr->next=new Node(a->data);
        curr=curr->next;
        a=a->next;
    }
    while(b)
    {
        curr->next=new Node(b->data);
        curr=curr->next;
        b=b->next;
    }
    return head;
    }
    Node* mergeSort(Node* head) {
        if(head==NULL || head->next==NULL)
        return head;
        Node* sp=head->next,*fp=head->next->next;
        while(fp && fp->next)
        {
            sp=sp->next;
            fp=fp->next->next;
        }
        Node* head1=head,*curr=head;
        while(curr->next!=sp)
        curr=curr->next;
        curr->next=NULL;
        return merge(mergeSort(head1),mergeSort(sp));
        // your code here
    }
};
