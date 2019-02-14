#include<stdio.h>

void getn(int* n)
{
 printf("Enter the number of elements ");
 scanf("%d",n);
}
 
void input(int n, int x[n],int* s)
{
 printf("Enter the elements ");
 for(int i=0;i<n;i++)
  scanf("%d",&x[i]);
 printf("Enter the search element ");
 scanf("%d",s);
}

int compute(int n,int x[],int s)
{
 int mid,low,high;
 low=0;
 high=n-1;
 for(int j=0;j<n;j++)
 {

  for(int i=0;i<(n-j);i++)
  {
    int t;
    if(x[i]>x[i+1])
     {
      t=x[i];
      x[i]=x[i+1];
      x[i+1]=t;
     }
   }
  }
  
  while(low<=high)
  {
   mid=(high+low)/ 2;
   if(s>x[mid])
   {
    low=mid+1;
   }
   else
   if(s==x[mid])
   {
    break;
   }
   else
    high=mid-1;
   }
  return mid;
 
}
void output(int mid)
{
 printf("The position is %d",mid+1);
}

int main()
{
 int n;
 getn(&n);
 int x[n],s,mid;
 input(n,x,&s);
 mid=compute(n,x,s);
 output(mid);
 return 0;
}
