Link: https://leetcode.com/problems/rotate-list/description/

ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL||k==0){
            return head;
        }
        int count=1;
        ListNode* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        temp->next=head;
        k=count-k%count;
        while(k>0){
            temp=temp->next;
            head=head->next;
            k--;
        }
        temp->next=NULL;
        return head;
    }
