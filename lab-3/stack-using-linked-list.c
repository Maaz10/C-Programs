#include<stdio.h>
#include<stdlib.h>

struct node
{
 int info;
 struct node *link;
};

typedef struct node *Node;
Node top=NULL;
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

void push(int item)
{
 if(count==size)
 {
  printf("stack is overflow ");
 }
 else
 {
  Node temp=getnode();
  temp->info=item;
  temp->link=top;
  top=temp;
  count++;
 }
}

void pop()
{
 if(top==NULL)
 {
  printf("Stack Undeflow ");
 }
 else
 {
  Node new=top;
  printf("The poped element is %d ",new->info);
  top=top->link;
  free(new);
  count--;
 }
}

void peek()
{
 Node ptr=top;
 if(ptr!=NULL)
 {
  printf("The top element is %d",ptr->info);
 }
 else
 {
  printf("Stack underflow ");
 }
}
 

void isempty()
{
 if(top==NULL)
 {
  printf("Stack Empty ");
 }
 else
 {
  printf("Stack not empty ");
 }
}

void display()
{
 Node ptr=top;
 printf("\nAfter operation:\n  ");
 while(ptr!=NULL)
 {
  printf(" %d",ptr->info);
  ptr=ptr->link;
 }
}

void main()
{
 int x,item,type;
 x:printf("Enter choice \n 1-> Push\n 2-> Pop\n 3-> Peek \n 4-> Isempty\n  -> ");
 scanf("%d",&type);
 switch(type)
 {
  case 1:
  	printf("Enter the element to be inserted: ");
  	scanf("%d",&item);
  	push(item);
  	display();
  	break;
  	
  case 2:
  	pop();
  	display();
  	break;
  	
 case 3:
 	peek();
 	break;
 case 4:
 	isempty();
 	break; 	
 }
 printf("\n\nIf want to repeat enter 1 else any: ");
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
