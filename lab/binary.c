#include<stdio.h>

int getn()
{
 int n;
 printf("Enter the number of elements ");
 scanf("%d",&n);
 return n;
}
 
void inputarray(int n, int x[n])
{
 printf("Enter the elements ");
 for(int i=0;i<n;i++)
  scanf("%d",&x[i]);
}

int searchelement()
{
 int s;
 printf("Enter the search element ");
 scanf("%d",&s);
 return s;
}

int search(int n,int x[],int s)
{
 int mid,low,high;
 low=0;
 high=n-1;

  while(low<=high)
  {
   mid=(high+low)/ 2;
   if(s>x[mid])
   {
    low=mid+1;
   }
   else
   if(s<x[mid])
   {
    high=mid-1;
   }
   else
   if(s==x[mid])
   {
   break;
   }
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
 n=getn();
 int x[n],s,mid;
 inputarray(n,x);
 s=searchelement();
 mid=search(n,x,s);
 output(mid);
 return 0;
}
