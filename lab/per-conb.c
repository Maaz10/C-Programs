#include<stdio.h>
#include<stdlib.h>

void input(int* n,int*r)
{
 printf("Enter the value n:");
 scanf("%d",n);
 printf("Enter the value of r:");
 scanf("%d",r);
}
void per(int n,int r,int* p)
{
 int a=1,b=1,f,d;
 f=n;
 d=n;
 for(int i=0;i<n;i++)
  {
     {
      a=a*d;
      d--;
      } 
  }
 for(int i=0;i<n;i++)
  {
   if((f-r)<=0)
    {
     break;
    }
    else
    {
     b=b*(f-r);
     f--;
    }
 }

   *p=a/b;
}
void comb(int n,int r,int* c)
{
 int a=1,b=1,e=1,f,d;
 f=n;
 d=n;
 for(int i=0;i<n;i++)
  {
     {
      a=a*d;
      d--;
      } 
  }
 for(int i=0;i<n;i++)
  {
   if((f-r)<=0)
    {
     break;
    }
    else
    {
     b=b*(f-r);
     f--;
    }
 }
 for(int i=0;i<n;i++)
  {
   if(r<=0)
    {
     break;
    }
    else
    {
     e=e*r;
     r--;
    }
 }
 *c=a/(b*e);
}

void output(int p,int c)
{
 printf("The Permeutation is %d",p);
 printf("The Combination is %d",c);
 
}

int main()
{
 int n,r,p,c;
 input(&n,&r);
 per(n,r,&p);
 comb(n,r,&c);
 output(p,c);
 return 0;
}
