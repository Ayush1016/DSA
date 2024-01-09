Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow=head;
        ListNode* fast=head;
        for(int i=0;i<n;i++){
            fast=fast->next;
            }
            if(fast==NULL)
            return head->next;
            while(fast->next!=NULL){
                
                fast=fast->next;
                slow=slow->next;
            }
            slow->next=slow->next->next;
            return head;
}
