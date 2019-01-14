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
 int min;
 if(x<=y)
 {
   min=x;
   if(min<=z)
     min=x;
   else 
     min=z;
  }
 else
  {
    if(y<z)
     {
       min=y;
       if(min<=x)
       min=y;
       else 
       min=x;
     }
    else 
     min=x;
  }
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
