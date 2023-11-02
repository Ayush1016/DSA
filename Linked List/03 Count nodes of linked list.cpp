Link: https://www.codingninjas.com/studio/problems/count-nodes-of-linked-list_5884?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

int length(Node *head)
{   int length=0;
    Node* temp=head;
    while(temp!=NULL){ 
        length++;
        temp=temp->next;
    }
    return length;
}
