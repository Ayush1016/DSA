Link: https://leetcode.com/problems/remove-linked-list-elements/

ListNode* removeElements(ListNode* head, int val) {
    if (head == NULL) {
        return head;
    }
    while (head != NULL && head->val == val) {
        ListNode* toDelete = head;
        head = head->next;
        delete toDelete;
    }
    ListNode* temp = head;
    while (temp != NULL && temp->next != NULL) {
        if (temp->next->val == val) {
            ListNode* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        } else {
            temp = temp->next;
        }
    }

    return head;
