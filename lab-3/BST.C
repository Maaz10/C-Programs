#include<stdio.h>
#include<stdlib.h>

struct node
 {
     int info;
     struct node *llink;
     struct node *rlink;
 };
 
typedef struct node * Node;
Node root=NULL;

Node getnode()
{
     Node x=(Node)malloc(sizeof(struct node));
     return x;
}

void preorder(Node root)
{
   if(root!=NULL)
     {
       printf("%d",root->info);
       preorder(root->llink);
       preorder(root->rlink);
     }
}

void inorder(Node root)
{
 if(root!=NULL)
 {
  inorder(root->llink);
  printf("%d",root->info);
  inorder(root->rlink);
 }
}

void postorder(Node root)
{
 if(root!=NULL)
 {
  postorder(root->llink);
  postorder(root->rlink);
  printf("%d",root->info);
 }
}

void create(int item)
{
 Node temp=getnode();
 temp->info=item;
 temp->llink=NULL;
 temp->rlink=NULL;
 if(root==NULL)
 {
  root=temp;
 }
 else
 {
  Node prev;
  Node ptr=root;
  while(ptr!=NULL)
  {
   prev=ptr;
   if(item<ptr->info)
   {
    ptr=ptr->llink;
   }
   else
   {
    ptr=ptr->rlink;
   }
  }
  if(item<prev->info)
  {
   prev->llink=temp;
  }
  else
  {
   prev->rlink=temp;
  }
 }
}

void main()
{
 int n,i,item;
 printf("\nEnter the size of the tree :");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  printf("Enter the item: ");
  scanf("%d",&item);
  create(item);
 }
 printf("\nPreoder: ");
 preorder(root);
 printf("\nInorder: ");
 inorder(root);
 printf("\nPostorder: ");
 postorder(root);
}
