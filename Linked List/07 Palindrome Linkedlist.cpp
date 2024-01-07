Link: https://leetcode.com/problems/palindrome-linked-list/description/

bool isPalindrome(ListNode* head) {
        stack <int>st;
        ListNode* temp=head;
        while(temp!=NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            if(temp->val!=st.top()){
                return false;
            }
            temp=temp->next;
                st.pop();
        }
        return true;
    }
