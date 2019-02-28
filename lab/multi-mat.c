#include<stdio.h>
#include<stdlib.h>

void getn(int* m1,int* m2,int* n1,int* n2,int* m,int* n)
{
 printf("Enter the no of rows and columns for 1st matrix: ");
 scanf("%d %d",m1,n1);
 printf("Enter the no of rows and columns for 2nd matrix: ");
 scanf("%d %d",m2,n2);
 if(*m1<*m2)
 {
  *m=*m1;
 }
 else
  *m=*m2;
 if(*n1<*n2)
 {
  *n=*n1;
 }
 else
  *n=*n2;
}

void input(int m1,int n1,int m2,int n2,int x[m1][n1],int y[m2][n2])
{
 printf("Enter the elements of 1st matrix\n");
 for(int i=0;i<m1;i++)
 {
  for(int j=0;j<n1;j++)
  {
   scanf("%d",&x[i][j]);
   }
  }
 printf("Enter the elements of 2nd matrix\n");
 for(int k=0;k<m2;k++)
 {
  for(int l=0;l<n2;l++)
  {
   scanf("%d",&y[k][l]);
   }
  }
}

void multi(int m1,int n1,int m2,int n2,int x[m1][n1],int y[m2][n2],int z[100][100])
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
     {
      z[i][k]=z[i][k]+(x[i][j]*y[j][k]);
     }
   }
   }
  }
 }
}

void output(int m,int n,int z[100][100])
{
 printf("The elements of the matrix after multiplication are\n");
 for(int i=0;i<m;i++)
 {
  printf("\n");
  for(int j=0;j<n;j++)    
  {
   printf(" %d",z[i][j]);
  }
 }
}

int main()
{
 int m1,m2,n1,n2,m,n;
 getn(&m1,&m2,&n1,&n2,&m,&n);
 int x[m1][n1],y[m2][n2],z[100][100];
 input(m1,n1,m2,n2,x,y);
 multi(m1,n1,m2,n2,x,y,z);
 output(m,n,z);
 return 0;
}


