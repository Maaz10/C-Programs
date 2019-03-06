#include<stdio.h>

void getn(int *n)
{
 printf("Enter the number of elements ");
 scanf("%d",n);
}

void input(int n,int x[])
{
 printf("Enter the elements\n");
 for(int i=0;i<n;i++)
 scanf("%d",&x[i]);
}

int dupli(int n,int x[])
{
 int  m;
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
   if(x[i]==x[j])
   {
    m=m+1;
   }
  }
 }
 return m;
}

void output(int m)
{
 printf("no of duplicates are %d",m);
}

int main()
{
 int n;
 getn(&n);
 int a[n],m=0;
 input(n,a);
 m=dupli(n,a);
 output(m);
 return 0;
}
