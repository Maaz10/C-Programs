#include<stdio.h>

void input(int* n)
{
 printf("Enter the limit ");
 scanf("%d",n);
}

void compute(int n,int x[])
{
 int j;
 j=0;
 for(int i=0;i<n;i++)
 {
  if(i%2 != 0)
  {
   if(i%3 != 0)
    {
     if(i%5 != 0)
     {
     x[j]=i;
     j++;
     }
 }}}
}

void output(int n,int x[])
{
 printf("The prime numbers are:\n");
 for(int i=0;i<n;i++)
   printf("%d ",x[i]);
}
 
int main()
{
 int n;
 input(&n);
 int x[n];
 compute(n,x);
 output(n,x);
 return 0;
}
 
 
