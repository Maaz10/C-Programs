#include<stdio.h>
#include<stdlib.h>

int a[10],max=10;

void merge(int beg,int mid,int end)
{
 int b[10];
 int i=beg,j=mid+1,k=beg,p;
 while(i<=mid && j<=end)
 {
  if(a[i]<=a[j])
  {
   b[k]=a[i];
   i++;
   k++;
  }
  else
  {
   b[k]=a[j];
   k++;
   j++;
  }
 }
  if(i>mid)
  {
   for(p=j;p<=end;p++)
   {
    b[k]=a[p];
    k++;
   }
  }
  if(j>end)
  {
   for(p=i;p<=mid;p++)
   {
    b[k]=a[p];
    k++;
   }
  }
  for(p=beg;p<=end;p++)
      a[p]=b[p];
}

void mergesort(int beg,int end)
{
 if(beg<end)
 {
  int mid=(int)(beg+end)/2;
  mergesort(beg,mid);
  mergesort(mid+1,end);
  merge(beg,mid,end);
 }
}

void main()
{
 printf("Enter the elements: \n");
 for(int i=0;i<max;i++)
      scanf("%d",&a[i]);
 mergesort(0,max-1);
 printf("After sorting:\n");
 for(int i=0;i<max;i++)
      printf("%d",a[i]);
}
