 Link: https://leetcode.com/problems/add-two-numbers/description/


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3=new ListNode(0);
        ListNode* temp=l3;
        int carry=0;
        while(l1 && l2 !=0){
            int value=l1->val+l2->val+carry;
            carry=value/10;
            l3->next=new ListNode (value%10);
            l3=l3->next;
            l2=l2->next;
            l1=l1->next;
        }
        while (l1){
            int value=l1->val+carry;
            carry=value/10;
            l3->next=new ListNode (value%10);
            l3=l3->next;
            l1=l1->next;
        }
        while (l2){
            int value=l2->val+carry;
            carry=value/10;
            l3->next=new ListNode (value%10);
            l3=l3->next;
            l2=l2->next;
        }
        if(carry){
            l3->next=new ListNode(carry);
        }
        return temp->next;
    }
