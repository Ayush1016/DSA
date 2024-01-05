Link: https://leetcode.com/problems/linked-list-cycle/description/


bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;    // If slow and fast pointers meet, there is a cycle.
            }
        }
            return false;
    }
