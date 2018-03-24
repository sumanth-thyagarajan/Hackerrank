/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    Node *h1,*h2;
    h1=headA;
    h2=headB;
    if(headA==NULL&headB==NULL)return 1;
    else if(headA==NULL&headB!=NULL)return 0;
   else if(headA!=NULL&headB==NULL)return 0;
    else
    {
        while(h1!=NULL&&h2!=NULL)
        {
            if(h1->data!=h2->data)return 0;
            h1=h1->next;
            h2=h2->next;
        
        }
    if(h1==NULL&h2==NULL)return 1;
    if(h1==NULL&h2!=NULL)return 0;
    if(h1!=NULL&h2==NULL)return 0;
    }
    return 1;
}

