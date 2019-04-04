#include<stdio.h>

struct decode
{
 int terms;
 int num[20];
 int len[20];
};

int input()
{
 int n;
 printf("Enter the number of instances ");
 scanf("%d",&n);
 return n;
}

void numbers(struct decode d)
{
 printf("Enter the number of terms ");
 scanf("%d",d.terms);
 printf("Enter the numbers ");
 for(int i=0;i<d.terms;i++)
 {
  scanf("%d",d.num[i]);
 }
}

void decoding(struct decode d)
{
 int n=0;
 for(int i=0;i<d.terms;i++)
 {
  if(d.num[i]==0)
  {
   for(int j=i;j<d.terms;j++)
   {
    x[n]=x+1;
   }
   n++;
  }
  

