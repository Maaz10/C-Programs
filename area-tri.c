#include<stdio.h>

void input(int *x, int *y)
{
 printf("Enter the base lenth ");
 scanf("%d",x);

 printf("enter the height ");
 scanf("%d",y);
}

int compute(int x, int y)
{
 int z;
 z=0.5*x*y;
 return z;
}
void output(int x, int y, int z)
{
 printf("area of triangle with base %d and height %d is %d \n",x,y,z);
}
void main()
{
 int x,y,z;
 input(&x,&y);
 z=compute(x,y);
 output(x,y,z);
} 
