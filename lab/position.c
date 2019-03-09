#include<stdio.h>

int getn()
{
 int n;
 printf("Enter the no of elements ");
 scanf("%d",&n);
 return n;
}
 
void input(int n,int x[])
{
 printf("Enter the elements ");
 for(int i=0;i<n;i++)
   scanf("%d",&x[i]);
}

int searchelement()
{
 int e;
 printf("Enter the search element ");
 scanf("%d",&e);
 return e;
}

void posi(int n,int x[],int e,int* m)
{
 for(int i=0;i<n;i++)
 {
  if(e == x[i])
    *m=i+1;
 }
}

void output(int e,int m)
{
 printf("The position of %d is %d",e,m);
}

int main(void)
{
 int n;
 n=getn();
 int x[n],e,m;
 input(n,x);
 e=searchelement();
 posi(n,x,e,&m);
 output(e,m);
 return 0;
}
