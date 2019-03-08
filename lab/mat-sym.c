#include<stdio.h>

void getorder(int* n)
{
 printf("Enter the no of rows/columns: ");
 scanf("%d",n);
}

void inputelements(int n,int x[n][n])
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

int transpose(int n,int x[n][n])
{
 int y[n][n],flag=0;
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
   if(x[i][j]!=y[i][j])
   {
    flag=1;
   }
  }
 }
 return flag;
}

void outputresult(int flag)
{
 if(flag!=1)
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
 getorder(&n);
 int x[n][n],flag;
 inputelements(n,x);
 flag=transpose(n,x);
 outputresult(flag);
 return 0;
}
