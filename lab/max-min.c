#include<stdio.h>

void getn(int* n)
{
 printf("Enter the number of elements: ");
 scanf("%d",n);
}

void input(int n,int x[n])
{
 printf("Enter the elements ");
 for(int i=0;i<n;i++)
  {
   scanf("%d",&x[i]);
  }
}

void compute(int n,int x[n],int* max,int* min)
{
 *max=0;
 *min=x[0];
 for(int i=0;i<n;i++)
 {
  if(x[i] > (*max))
  {
   *max=x[i];
  }
 }
 for(int j=0;j<n;j++)
 {
  if(x[j] < (*min))
  {
   *min=x[j];
  }
 }
}

void output(int max,int min)
{
 printf("The maximum of them is %d\n",max);
 printf("The minimum of them is %d",min);
}

int main()
{
 int n;
 getn(&n);
 int x[n],a,b;
 input(n,x);
 compute(n,x,&a,&b);
 output(a,b);
 return 0;
} 
