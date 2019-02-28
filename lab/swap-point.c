#include<stdio.h>

void input(int* x,int* y)
{
 printf("Enter two numbers ");
 scanf("%d %d",x,y);
}

void swap(int* x,int* y)
{
 int t;
 t=*x;
 *x=*y;
 *y=t;
}
 
void output(int x, int y)
{
 printf("After swaping the numbers are %d and %d",x,y);
}

int main(void)
{
 int x,y;
 input(&x,&y);
 swap(&x,&y);
 output(x,y);
 return 0;
}
