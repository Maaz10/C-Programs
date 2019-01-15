#include<stdio.h>
int input(int *c, int m[])
{
 int i;
 printf("Enter the number of inputs ");
 scanf("%d",c);
 printf("Enter the numbers ");
 for( i=0;i<*c;i++)
   scanf("%d",&m[i]);
 return 0;
}
int add(int l, int n[])
{
 int x=0,i;
 for( i=0;i<l;i++)
   x+=n[i];
 return x;
}
void output(int z)
{
  printf("sum of them are %d",z);
}
int main()
{
 int n[100];
 int l,z;
 input(&l,n);
 z=add(l,n);
 output(z);
 return 0;
}
