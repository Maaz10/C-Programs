#include<stdio.h>
#include<stdlib.h>

void getn(int* m1,int* m2,int* n1,int* n2)
{
 printf("Enter the no of rows and columns for 1st matrix: ");
 scanf("%d %d",m1,n1);
 printf("Enter the no of rows and columns for 2nd matrix: ");
 scanf("%d %d",m2,n2);
}

void input(int m,int n,int x[m][n])
{
 printf("Enter the elements of 1st matrix\n");
 for(int i=0;i<m;i++)
 {
  for(int j=0;j<n;j++)
  {
   scanf("%d",&x[i][j]);
   }
  }
}

int multi(int m1,int n1,int m2,int n2,int x[m1][n1],int y[m2][n2],int z[m1][n2])
{
 if(n1!=m2)
 {
  return -1;
 }
 else
 {
  for(int i=0;i<m1;i++)
  {
   for(int k=0;k<n2;k++)
   {
     for(int j=0;j<m2;j++)
    {
     z[i][k]=0;
     z[i][k]=z[i][k]+(x[i][j]*y[j][k]);
   }
   }
  }
 }
 return 0;
}

void output(int m1,int n2,int z[m1][n2])
{
 printf("The elements of the matrix after multiplication are\n");
 for(int i=0;i<m1;i++)
 {
  printf("\n");
  for(int j=0;j<n2;j++)    
  {
   printf(" %d",z[i][j]);
  }
 }
}

int main()
{
 int m1,m2,n1,n2;
 getn(&m1,&m2,&n1,&n2);
 int x[m1][n1],y[m2][n2],z[m1][n2];
 input(m1,n1,x);
 input(m2,n2,y);
 multi(m1,n1,m2,n2,x,y,z);
 output(m1,n2,z);
 return 0;
}
