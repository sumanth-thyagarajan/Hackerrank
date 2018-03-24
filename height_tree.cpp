
/*The tree node has data, left child and right child 
struct node
{
    int data;
    node* left;
    node* right;
};

*/
int height(node * root)
{
  int r1=0;
    int l1=0;
   if(root==NULL)
        return 0;
    else
        {
        l1=height(root->left);
        r1=height(root->right);
        if(l1>r1)
            return l1+1;
    else return r1+1;   
   }
 //   return 0;
}
  

