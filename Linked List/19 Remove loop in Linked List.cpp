Link: https://www.geeksforgeeks.org/problems/remove-loop-in-linked-list/1?page=1&category=Linked%20List&difficulty=Easy,Medium&status=unsolved&sprint=a663236c31453b969852f9ea22507634&sortBy=submissions

void removeLoop(Node* head)
    {
        if(head==NULL&&head->next==NULL){
            return;
        }
        Node* slow = head;
        Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            slow=head;
            if(slow==fast){
                while(fast->next!=slow)
                fast=fast->next;
            }
            else{
                while(slow->next!=fast->next){
                    slow=slow->next;
                    fast=fast->next;
                }
            }
            fast->next=NULL;
            return;
        }
    }
  }
