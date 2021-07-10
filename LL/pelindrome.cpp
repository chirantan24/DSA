class Solution{
  public:
    //Function to check whether the list is palindrome.
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
    bool isPalindrome(Node *head)
    {
        if(head->next==NULL)
        return 1;
        Node* sp=head->next,*fp=head->next->next;
        while(fp && fp->next)
        {
            sp=sp->next;
            fp=fp->next->next;
        }
        if(fp && fp->next==NULL)
        {
            Node* k=new Node(sp->data);
            k->next=sp->next;
            sp->next=NULL;
            sp=k;
        }
        else
        {
            fp=head;
            while(fp->next!=sp)
            fp=fp->next;
            fp->next=NULL;
        }
        sp=reverseList(sp);
        fp=head;
        while(fp)
        {
            if(fp->data!=sp->data)
            return 0;
            fp=fp->next;
            sp=sp->next;
        }
        return 1;
        //Your code here
    }
};
