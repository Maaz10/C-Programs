#include<stdio.h>
#include<stdlib.h>

void input(int* n,int*r)
{
 printf("Enter the value n:");
 scanf("%d",n);
 printf("Enter the value of r:");
 scanf("%d",r);
}
void compute(int n,int r,int* p)
{
 int a=1,b=1,f,d;
 f=n;
 d=n;
 for(int i=0;i<n;i++)
  {
   if(d==0)
    {
     exit(0);
    }
    else
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

void output(int p)
{
 printf("The Permeutation is %d",p);
 
 
}

int main()
{
 int n,r,p;
 input(&n,&r);
 compute(n,r,&p);
 output(p);
 return 0;
}
