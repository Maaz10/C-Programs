#include<stdio.h>

int input(int* x,int* y)
{
 printf("Enter two numbers ");
 scanf("%d %d",x,y);
 return 0;
}

int compute(int* x,int* y)
{
 int t;
 t=*x;
 *x=*y;
 *y=t;
 return 0;
}
 
void output(int x, int y)
{
 printf("After swaping the numbers are %d and %d",x,y);
}

int main(void)
{
 int x,y;
 input(&x,&y);
 compute(&x,&y);
 output(x,y);
 return 0;
}
