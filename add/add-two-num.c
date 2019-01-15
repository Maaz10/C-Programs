#include<stdio.h>
void input(int *a,int *b) 
{                  
	printf("enter 1st number\n");
	scanf("%d",a);
 
	printf("enter 2nd number\n");
	scanf("%d",b);
}
int add(int a,int b )
{
	int c;
	c=a+b;
	return c;
} 
void output(int x,int y,int z)
{ 
	printf(" %d + %d = %d ",x,y,z);
}
int main()
{
	int x,y,z;
	input(&x,&y);
	z=add(x,y);
	output(x,y,z);
}

