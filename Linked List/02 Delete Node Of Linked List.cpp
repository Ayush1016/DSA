Link: https://www.codingninjas.com/studio/problems/delete-node-of-linked-list_8160463?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

Node *deleteLast(Node *list){
   Node * head = list;
   while(head->next->next != NULL){
       head = head->next;
   }
   head->next = NULL;
   return list;
}
