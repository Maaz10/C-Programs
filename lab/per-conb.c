#include<stdio.h>
#include<stdlib.h>

void input(int* n,int*r)
{
 printf("Enter the value n:");
 scanf("%d",n);
 printf("Enter the value of r:");
 scanf("%d",r);
}
void compute(int n,int r,int* p,int* c)
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
   *p=a/b;
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
 compute(n,r,&p,&c);
 output(p,c);
 return 0;
}
