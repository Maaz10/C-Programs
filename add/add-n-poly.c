#include<stdio.h>
#include<math.h>

int getn(int* n )
{
 return 0;
}
 
int input(int n ,int coef[n], int x[n])
{
 int i;
 printf("Enter the number of terms in the polynomial ");
 scanf("%d",&n);
 printf("Enter the terms");
 for(i=0;i<n;i++)
  scanf("%d*%d",&coef[i],&x[i]);
 return 0;
}

int add(int n,int coef[],int x[], int z[],int* sum )
{
 int i,m;
 m=n-1;
 for(i=0;i<m;i++)
  {
   z[i] *=(coef[i])*(pow(x[i], i));
   *sum += z[i]; 
  }
 return 0;
}

void output(int x)
{
 printf("the sum of them is %d",x);
}
int main()
{
 int n;
 getn(&n);
 int x[n],y[n],c[n],s=0;
 input(n,x,y);
 add(n,x,y,c,&s);
 output(s);
 return 0;
}
