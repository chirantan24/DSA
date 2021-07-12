int CountTriplets(Node* head,int k)
{
	Node * left=head,*right=head;
	while(right->next!=NULL)
	right=right->next;
	Node* curr=head;
	int cnt=0;
	while(curr)
	{
		Node* l=left,*r=right;
		while(l!=r && l->prev!=r)
		{
			int sum=l->data+r->data+curr->data;
			if(sum<k)
			l=l->next;
			else if(sum>k)
			r=r->prev;
			else
			{
				cnt++;
				l=l->next;
				r=r->prev;
			}
		}
		curr=curr->next;
	}
	return cnt;
}
