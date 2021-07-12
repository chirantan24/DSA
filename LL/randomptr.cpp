Node *copyList(Node *head)
    {
        map<Node*,Node*>m;
        Node* copy=NULL,*curr=NULL;
        Node* t=head;
        while(t)
        {
            m[t]=t->next;
            if(copy)
            {
                curr->next=new Node(t->data);
                curr=curr->next;
            }
            else
            {
                copy=new Node(t->data);
                curr=copy;
            }
            t=t->next;
        }
        curr=copy;
        t=head;
        while(t)
        {
            Node* temp=t->next;
            t->next=curr;
            curr->arb=t;
            t=temp;
            curr=curr->next;
        }
        curr=copy;
        while(curr)
        {
            if(curr->arb->arb)
                curr->arb=curr->arb->arb->next;
            else
            curr->arb=NULL;
            curr=curr->next;
        }
        curr=head;
        for(auto &i:m)
        i.first->next=i.second;
        return copy;
        //Write your code here
    }
