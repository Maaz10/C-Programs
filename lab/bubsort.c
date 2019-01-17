#include<stdio.h>

int getn(int* n)
{
 printf("Enter the number of elements ");
 scanf("%d",n);
 return 0;
}
 
int input(int n, int x[n])
{
 printf("Enter the elements ");
 for(int i=0;i<n;i++)
  scanf("%d",&x[i]);
 return 0;
}
int compute(int n,int* x )
{

 for(int i=0;i<n;i++)
  {
    if(x[i]>x[i+1])
    
     x[i]=x[i+1];
     x[i+1]=x[i];
  }
 return 0;
}
void output(int n,int* x)
{
 printf("The sorted form is \n");
 for(int i=0;i<n;i++)
  printf(" %d ",x[i]);
}
int main()
{
 int n;
 getn(&n);
 int x[n];
 input(n,x);
 compute(n,x);
 output(n,x);
 return 0;
}
