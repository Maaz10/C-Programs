#include<stdio.h>

void input(int* n)
{
 printf("Enter the number of rows ");
 scanf("%d",n);
}

void output(int n ,int* x)
{
 int i,j;
 for( i=0;i<n;i++)
 {
   printf("\n \t");
      for(int k=i;k<n;k++)
     {
       printf(" ");
     }      
     for(j=i;j<(2*i)+1;j++)
        {
         printf(" *");
        }
        
      
  }
 printf("\n");
}

int main()
{  
 int n;
 input(&n);
 int x[n];
 output(n,x);
 return 0;
}
