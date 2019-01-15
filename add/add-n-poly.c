#include<stdio.h>

int getn(int* n )
{
}
 
int input(int n ,int coef[], int x[], int p[])
{
 int i;
 printf("Enter the number of terms in the polynomial ");
 scanf("%d",&n);
 printf("Enter the terms");
 for(i=0;i<n;i++)
  scanf("%d*(%d)^%d",coef,x,p);
 return 0;
}

int add(int n,int coef[],int x[],int p[])
{
 int i;
 for(i=0;i<p;i++)
   x *= x[i];
 for(i=0;i)
    

}

void output(int x)
{
 printf("the sum of them is %d",x);
}
int main()
{
 int n;
 getn(&n);
 int x[n],y[n],z[n];
 input(n,x,y,z);
 add();
 output(x,y,z);
 return 0;
}
