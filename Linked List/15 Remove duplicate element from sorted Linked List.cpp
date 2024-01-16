Link: https://www.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1?page=1&category=Linked%20List&difficulty=Basic,Easy,Medium&sortBy=submissions

Node *removeDuplicates(Node *head)
{
    Node* temp=head;
    if(head==NULL||head->next==NULL){
        return head;
    }
    while(temp->next!=NULL){
        if(temp->data==temp->next->data){
            Node* todel=temp->next;
            delete(todel);
            temp->next=temp->next->next;
        }
        else
        temp=temp->next;
    }
    return head;
}
