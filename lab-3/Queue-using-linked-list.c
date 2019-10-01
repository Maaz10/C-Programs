#include<stdio.h>
#include<stdlib.h>

struct node
{
 int info;
 struct node *link;
};

typedef struct node *Node;
Node front=NULL, rear=NULL;
int count=0,size=10;

Node getnode()
{
 Node x;
 x=(Node)malloc(sizeof(struct node));
 if(x==NULL)
 {
  printf("out of Memory ");
  exit(0);
 }
 return x;
}


void qinsert(int item)
{
 if(count==size)
 {
  printf("Queue is overflow");
 }
 else
 {
  Node temp=getnode();
  temp->info=item;
  if(count==0)
  {
   temp->link=NULL;
   front=temp;
   rear=temp;
   count++;
  }
  else
  {
   rear->link=temp;
   rear=temp;
   count++;
  }
 }
}

void qdelete()
{
 if(front==NULL)
 {
  printf("Queue is underflow ");
 }
 else
 {
  Node temp=front;
  if(count==1)
  {
   front=NULL;
   rear=NULL;
  }
  else
  {
   front=front->link;
   free(temp);
   count--;
  }
 }
}

void isempty()
{
 if(front==NULL)
 {
  printf("Queue is Empty ");
 }
 else
 {
  printf("Queue is not Empty ");
 
 }
}

void isfull()
{
if(count==size)
 {
  printf("Queue is Full");
 }
 else
 {
  printf("Queue is not Full");
 }
}
 
void display()
{
 Node ptr=front;
 while(ptr!=NULL)
 {
  printf(" %d",ptr->info);
  ptr=ptr->link;
 }
}
void main()
{
 int item,type,x;
 x:printf("Enter choice \n 1-> Enqueue \n 2-> Dequeue \n 3-> IsEmpty \n 4-> IsFull \n  -> ");
 scanf("%d",&type);
 switch(type)
 {
  case 1:
         printf("Enter the element: ");
         scanf("%d",&item);
         qinsert(item);
         display();
         break; 
  case 2:
  	qdelete();
  	display();
  	break;
  case 3:
        isempty();
        break;
  case 4:
  	isfull();
  	break;
 }
 printf("\n\nIf you want to reapeat  enter 1 or any: ");
 scanf("%d",&x);
 if(x==1)
 {
  goto x;
 }
 else
 {
  exit(0);
 }
}
 
