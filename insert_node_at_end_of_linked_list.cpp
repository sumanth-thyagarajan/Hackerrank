/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node *node=(Node*)malloc(sizeof(Node));
        node->next=NULL;
        node->data=data;
        if(head)
        {
            Node *temp=(Node*)malloc(sizeof(Node));
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=node;
        }
        else  head=node;
        return head;
}

