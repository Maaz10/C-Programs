#include<stdio.h>

int getn(int* n)
{
 printf("Enter the number of terms ");
 scanf("%d",n);
 return 0;
}

int input(int n, int x[n] , int* y)
{

 printf("Enter the coeffecients ");
 for(int i=0 ; i<n ; i++ )
   scanf("%d",&x[i]);
 printf("Enter the value of x ");
 scanf("%d",y);
 
 return 0;
}
int add(int n, int coef[] , int x , int*  sum )
{
 printf("%d",n);
 for( int i=0 ; i<n ;i++ ) 
 {
  *sum = ((coef[i])+(x*(*sum)));
  }
 return 0;
}
void output(int z)
{
 printf("the sum is %d",z);
}
int main()
{
 int n;
 getn(&n);
 int x[n],y,s=0;
 input(n,x,&y);
 add(n,x,y,&s);
 output(s);
}
 
