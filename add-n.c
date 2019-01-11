#include<stdio.h>
int input(int n, int m[100])
{
 printf("Enter the number of inputs ");
 scanf("%d",&n);
 printf("Enter the numbers ");
 for(int i=0;i<n;i++)
   scanf("%d",&m[100]);
}
int add(int n[100])
{
 int x;
 for(int i=0;i<n[100];i++)
   x+=n[i];
 return x;
}
void output(int z)
{
  printf("sum of them are %d",z);
}
int main()
{
 int n[100],l,z;
 input(l,n[100]);
 z=add(n[100]);
 output(z);
}
