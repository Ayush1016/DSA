Link: https://www.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1

int getNthFromLast(Node *head, int n)
    {
        Node* slow=head;
        Node* fast=head;
        for(int i=1;i<n;i++){
            fast=fast->next;
            if(fast==NULL){
                return -1;
            }
        }
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        return slow->data;
    }
