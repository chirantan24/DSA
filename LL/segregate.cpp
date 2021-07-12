Node* segregate(Node *head) {
        Node* zero=NULL,*one=NULL,*two=NULL;
        Node* curr1=NULL,*curr2=NULL,*curr3=NULL;
        while(head)
        {
            if(head->data==0)
            {
                if(zero)
                {
                    curr1->next=head;
                    curr1=curr1->next;
                }
                else
                    {zero=head;curr1=zero;}
            }
            if(head->data==1)
            {
                if(one)
                {
                    curr2->next=head;
                    curr2=curr2->next;
                }
                else
                    one=head,curr2=one;
            }
            if(head->data==2)
            {
                if(two)
                {
                    curr3->next=head;
                    curr3=curr3->next;
                }
                else
                two=head,curr3=two;
            }
            head=head->next;
        }
        if(curr1 && one)
        curr1->next=one;
        else if(curr1)
        curr1->next=two;
        if(curr2)
        curr2->next=two;
        if(curr3)
        curr3->next=NULL;
        if(zero)
        return zero;
        if(one)
        return one;
        if(two)
        return two;
    }
