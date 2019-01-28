#include<stdio.h>

void getn(int* m)
{
 printf("Enter the number of rows/columns ");
 scanf("%d",m);
}

void input(int m,int x[m][m])
{
 printf("Enter the elements \n");
 for(int i=0;i<m;i++)
 {
  for(int j=0;j<m;j++)
   {
    scanf("%d",&x[i][j]);
   }
 }
}

void compute(int m,int x[m][m],int y[m] )
{
  for(int i=0;i<m;i++)
 {
  for(int j=0;j<m;j++)
   {
    if(i == j)
     {
       for(int k=i;k<m;k++)    
        y[k]=x[i][j];
     }
   }
  } 
}

void output(int m,int y[m])
{
 printf("The diagonal elements are : \n");
 for(int i=0;i<m;i++)
 printf("%d\n",y[i]);
}

int main()
{
 int m;
 getn(&m);
 int x[m][m],y[m];
 input(m,x);
 compute(m,x,y);
 output(m,y);
 return 0;
}




