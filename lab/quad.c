#include <stdio.h>
#include <math.h>

typedef struct complex
{ 
 long long x;
 long long y;
}comp;

int input(int* a, int* b, int* c )
{
 printf("Enter th coeffecients of a b and c ");
 scanf("%d %d %d",a,b,c);
 return 0;
 }

int compute(int a, int b, int d,comp* c)
{
 int x,y,z,f;
 
 z=(2*a);
 f=-b;
 x=(b*b)-(4*a*d);
 y=(pow(x,0.5));
 c->x=((f+y)/z);
 c->y=((f-y)/z);
  printf("the roots are %lld and %lld ",c->x,c->y);
 return 0;
}
void output(comp c)
{
 printf("the roots are %lld and %lld ",c.x,c.y);
}
int main(void)
{
 comp c;
 int a,b,d;
 input(&a,&b,&d);
 compute(a,b,d,&c);
 output(c);
 return 0;
}
