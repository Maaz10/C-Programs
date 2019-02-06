#include<stdio.h>

void getn(int* n)
{
 printf("Enter the no of rows/columns: ");
 scanf("%d",n);
}

void input(int n,int x[n][n])
{
 printf("Enter the elements \n");
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
   scanf("%d",&x[i][j]);
  }
 }
}

void compute(int n,int x[n][n],int* m)
{
 int y[n][n];
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
   y[j][i]=x[i][j];
  }
 }
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
   if(x[i][j]==y[i][j])
   {
   }
   else
   {
    *m=0;
   }
  }
 }
}

void output(int m)
{
 if(m!=0)
 {
  printf("The matrix is symetric ");
 }
 else
 {
  printf("The matrix is not symetric");
 }
}

int main()
{
 int n;
 getn(&n);
 int x[n][n],m;
 input(n,x);
 compute(n,x,&m);
 output(m);
 return 0;
}
