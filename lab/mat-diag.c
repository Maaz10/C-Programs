#include<stdio.h>

int getn(int* m,int* n)
{
 printf("Enter the number of rows ");
 scanf("%d",m);
 printf("Enter the number of columns ");
 scanf("%d",n);
 return 0;
}

int input(int m,int n,int x[][])
{
 printf("Enter the elements \n");
 for(int i=0;i<m;i++)
 {
  for(int j=0;j<n;j++)
   {
    scanf("%d",&x[i][j]);
   }
 }
 return 0;
}

int compute()
{
 int n=100;
  for(int i=0;i<m;i++)
 {
  for(int j=0;j<n;j++)
   {
    if(i == j)
     {
      for(int k=0;k<n;i++)
      






