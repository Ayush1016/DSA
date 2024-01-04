Link: https://leetcode.com/problems/middle-of-the-linked-list/submissions/1135881249/

ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!= NULL && fast->next!= NULL){      // Traverse the linked list using the slow and fast pointers
            slow=slow->next;                          // Move slow one step at a time
            fast=fast->next->next;                    // Move fast two steps at a time
        }
        return slow;                    //return slow becz slow is middle of the linkedlist
    }
