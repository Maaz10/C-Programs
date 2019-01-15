#include<stdio.h>

struct frac
{
 int num,deno;
};

int input(int* n,struct frac c[])
{
 printf("Enter the number of inputs ");
 scanf("%d",n);
 printf("Enter the numbers ");
 for(int i=0;i<*n;i++)
  {
   scanf("%d/%d",&c[i].num,&c[i].deno); 
  }
 return 0;
}

void add(int n,struct frac* c, int* a, int* b)
{
 int z=1,i,j,k;
 for( i=0;i<n;i++)
   *a += c[i].deno;
 for( j=0;j<n;j++)
  {
    for( k=0;k<n;k++) 
     {
      if(j!=k)
        z*=c[k].deno;
     }
    *b += (z*(c[j].num));
    z=1;
   }
}

void output(int num, int deno)
{
 printf("The sum of them is %d/%d",num,deno);
}
int main()
{
 struct frac c[100];
 int x,y=0,z=0;
 input(&x,c);
 add(x,c,&y,&z); 
 output(y,z);
 return 0;
}
