#include<stdio.h>

void input(int *x, int *y)
{
 printf("Enter 1st number");
 scanf("%d",x);

 printf("Enter 2nd number");
 scanf("%d",y);
}
int comp(int x, int y)
{
 if(x<y)
   return x;
 else 
   return y;
}
void output(int x, int y,int z)
{
 printf("the smaller among %d and %d is %d",x,y,z);
}
int main()
{
 int x,y,z;
 input(&x,&y);
 z=comp(x,y);
 output(x,y,z);
}
 
