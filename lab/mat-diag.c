#include<stdio.h>

void getorder(int* n)
{
 printf("Enter the number of rows/columns ");
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

void diagonal(int n,int x[n][n],int y[n] )
{
  for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
   {
    if(i == j)
     {
       for(int k=i;k<n;k++)    
        y[k]=x[i][j];
     }
   }
  } 
}

void outputresult(int n,int y[n])
{
 printf("The diagonal elements are : \n");
 for(int i=0;i<n;i++)
 printf("%d\n",y[i]);
}

int main()
{
 int n;
 getorder(&n);
 int x[n][n],y[n];
 inputelements(n,x);
 diagonal(n,x,y);
 outputresult(n,y);
 return 0;
}
