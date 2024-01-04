Link: https://leetcode.com/problems/reverse-linked-list/description/

ListNode* reverseList(ListNode* head) {
        ListNode* prev;
        ListNode* curr;
        ListNode* nextt;
        curr=head;          // Initialize 'curr' with the head of the original list
        prev=NULL;            // Initialize 'prev' to NULL because the last node of the reversed list should point to NULL
         while (curr != NULL) {
        nextt = curr->next;      // Store the next node in 'nextt' before modifying 'curr->next'
        curr->next = prev;        // Reverse the direction of the arrow, making the current node point to the previous node
        prev = curr;             // Move 'prev' and 'curr' one step forward in the list
        curr = nextt;
    }
    return prev;
    }
