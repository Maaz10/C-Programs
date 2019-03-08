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
 int y[n][n],m;
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
    m=0;
   }
  }
 }
 return m;
}

void outputresult(int m)
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
 getorder(&n);
 int x[n][n],m;
 inputelements(n,x);
 m=transpose(n,x);
 outputresult(m);
 return 0;
}
