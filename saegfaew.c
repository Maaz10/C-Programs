#include<stdio.h>
#include<math.h>

struct fraction
{
 int num,deno;
};

int input(struct fraction *f)
{
 int n;
 printf("Enter the num/deno ");
 scanf("%d/%d",&f[0].num,&f[0].deno);
 printf("Number of terms ");
 scanf("%d",&n);
 return n;
}

void compute(int n,struct fraction* f,int a[100])
{
 for(int i=0;i<n;i++)
 {
  a[i]=ceil(f[i].deno/f[i].num);
  f[i+1].num=((f[i].num*a[i])-f[i].deno);
  f[i+1].deno=(f[i].deno*a[i]);
 }
}

void output(int n,int a[100])
{
 printf("The egyptian fractian\n");
 for(int i=0;i<n;i++)
 {
  printf("+1/%d",a[i]);
 }
}

int main()
{
 struct fraction f[100];
 int n;
 n=input(f);
 int a[n];
 compute(n,f,a);
 output(n,a);
 return 0;
}
