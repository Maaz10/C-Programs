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

void sort(int n,int* x )
 { 
  int t=0;
  int flag=0;
  for(int j=0;j<n;j++)
  {
   flag=0;
   for(int i=0;i<(n-j-1);i++)
   {
    if(x[i]>x[i+1])
     {
      t=x[i];
      x[i]=x[i+1];
      x[i+1]=t;
      flag=1;
     }
    }
   if(flag==0)
   {
    break;
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
 sort(n,x);
 output(n,x);
 return 0;
}
