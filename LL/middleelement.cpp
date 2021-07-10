class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head== NULL || head->next==NULL)
            return head;
        ListNode* sp=head->next,*fp=head->next->next;
        while(fp && fp->next)
        {
            sp=sp->next;
            fp=fp->next->next;
        }
        return sp;
    }
};
