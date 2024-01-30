Link: https://www.geeksforgeeks.org/problems/delete-without-head-pointer/1?page=1&category=Linked%20List&difficulty=Easy,Medium&status=unsolved&sprint=a663236c31453b969852f9ea22507634&sortBy=submissions

void deleteNode(Node *del)
    {
        if(del==NULL&&del->next==NULL){
            return;
        }
        Node* temp=del->next;
        del->data=temp->data;
        del->next=temp->next;
        delete(temp);
    }
