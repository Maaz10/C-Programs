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
int comp(int x, int y, int z)
{
 if(x>=y && x>=z)
   return x;
 else 
 if(y>=x && y>=z)
   return y;
 else
   return z; 
}
void output(int x)
{
 printf("the largest of them is %d",x);
}
int main()
{
 int x,y,z,a;
 input(&x,&y,&z);
 a=comp(x,y,z);
 output(a);
}
