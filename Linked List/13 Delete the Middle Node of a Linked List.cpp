Link: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/

ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL || head->next == NULL) {
        return NULL;
    }
        ListNode* slow=head;
        ListNode* fast=head;
        fast=fast->next->next;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
            slow->next=slow->next->next;
        return head;
    }
