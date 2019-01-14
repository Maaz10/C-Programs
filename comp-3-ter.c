#include<stdio.h>

void input(int*x, int* y, int* z)
{
  printf("Enter the first number ");
  scanf("%d",x);

  printf("Enter the second number ");
  scanf("%d",y);

  printf("Enter the third number ");
  scanf("%d",z);
}
int comp(int a, int b, int c)
{
 int min;
 min=a<( b<c ? b:c) ? a :(b<c ? b:c);
 return min;
}
void output(int x)
{
 printf("the smallest of them is %d",x);
}
int main()
{
 int x,y,z,a;
 input(&x,&y,&z);
 a=comp(x,y,z);
 output(a);
}
