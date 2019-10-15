#include<stdio.h>
#include<stdlib.h>

struct node
{
	int coeff,exp;
	struct node *link;
};

typedef struct node *NODE;
NODE poly1,poly2,poly;

NODE getnode()
{
 	NODE x;
 	x=(NODE)malloc(sizeof(struct node));
 	if(x==NULL)
	{
 		printf("No Memory Left");
 		exit(0);
 	}
 	return x;
}

NODE createpoly()
{
	int c,p,i;
	NODE e,ptr;
	ptr=getnode();
	e=ptr;
	ptr->link=e;
	do
	{	
		NODE temp=getnode();
		ptr->link=temp;
		printf("Enter the coeffecisnt: ");
		scanf("%d",&c);
		temp->coeff=c;
		printf("Enter the exponent: ");
		scanf("%d",&p);
		temp->exp=p;
		temp->link=e;
		ptr=temp;
		printf("If want to continue enter 1 : ");
		scanf("%d",&i);
	}while(i==1);
	return e;
}

NODE add()
{
	NODE a,ptr;
	ptr=getnode();
	a=ptr;
	ptr->link=a;
	NODE ptr1=poly1->link;
	NODE ptr2=poly2->link;
	while( ptr1!=poly1 && ptr2!=poly2 )
	{
		NODE temp=getnode();
		ptr->link=temp;
		ptr=temp;
		if( ptr1->exp > ptr2->exp )
		{
			ptr->exp=ptr1->exp;
			ptr->coeff=ptr1->coeff;
			ptr1=ptr1->link;
	 	}
	 	else if( ptr1->exp < ptr2->exp )
		{
			ptr->exp=ptr2->exp;
			ptr->coeff=ptr2->coeff;
			ptr2=ptr2->link;
	 	}
	 	else
	 	{
	 	 ptr->exp=ptr1->exp;
	 	 ptr->coeff=ptr1->coeff+ptr2->coeff;
	 	 ptr1=ptr1->link;
	 	 ptr2=ptr2->link;
	 	}
	 }
	 while( ptr1!=poly1 || ptr2!=poly2 )
	 {
	 	while(ptr1!=poly1)
	 	{
	 		NODE temp=getnode();
	 		ptr->link=temp;
	 		ptr=temp;
	 		ptr->exp=ptr1->exp;
	 		ptr->coeff=ptr1->coeff;
	 		ptr1=ptr1->link;
	 	}
	 	while(ptr2!=poly2)
	 	{
	 		NODE temp=getnode();
	 		ptr->link=temp;
	 		ptr=temp;
	 		ptr->exp=ptr2->exp;
	 		ptr->coeff=ptr2->coeff;
	 		ptr2=ptr2->link;
	 	}
	 }
	 ptr->link=a;
	 return a;
}

void display(NODE p)
{
	NODE ptr=p->link;
	while(ptr!=p)
	{
		printf("%dx^%d ",ptr->coeff,ptr->exp);
		printf("+");
		ptr=ptr->link;
	}
		printf("\n");
}

void main()
{
	printf("Enter the 1st poly ");
	poly1=createpoly();
	display(poly1);
	printf("ENter the 2nd poly ");
	poly2=createpoly();
	display(poly2);
	poly=add();
	display(poly);
}
			
