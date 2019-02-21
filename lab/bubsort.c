#include<stdio.h>

void getn(int* n)
{
 printf("Enter the number of elements ");
 scanf("%d",n);
}
 
void input(int n, int x[n])
 {
  printf("Enter the elements ");
  for(int i=0;i<n;i++)
   scanf("%d",&x[i]);
}

void compute(int n,int* x )
 { 
  int t=0;
  for(int j=0;j<n;j++)
  {
   for(int i=0;i<(n-j-1);i++)
   {
    if(x[i]>x[i+1])
     {
      t=x[i];
      x[i]=x[i+1];
      x[i+1]=t;
     }
    }
  }
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
