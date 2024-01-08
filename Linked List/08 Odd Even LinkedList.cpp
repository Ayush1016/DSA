Link: https://leetcode.com/problems/odd-even-linked-list/description/

ListNode* oddEvenList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evenhead=even;
        while(even!=NULL&&even->next!=NULL){
            odd->next=odd->next->next;
            odd=odd->next;
            even->next=even->next->next;
            even=even->next;
        }

        odd->next=evenhead;
    return head;
    }
