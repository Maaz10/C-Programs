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

int add(int n,struct frac* c, int* a, int* b)
{
 int i;
for(int i=0;i<n;i++){
 printf("%d",c[i].num);
} 
for( i=0;i<n;i++)
   *a += c[i].num;
 for( i=0;i<n;i++)
   *b += c[i].deno;
 return 0;
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
