
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

int compute(int a, int b, int d,comp* c1)
{
 int c,x,y,z,f;
 z=(2*a);
 f=-b;
 x=(b*b)-(4*a*d);
 if(x<0)
 {
  c=-(x);
  c1->x=f/z;
  c1->y=(sqrt(c))/z;
 }
 else
 {
  y=(pow(x,0.5));
  c1->x=((f+y)/z);
  c1->y=((f-y)/z);
 }
 return x;
}
void output(comp c1,int z)
{
 if(z<0)
 {
 printf("roots are imaginary \n");
 printf("%lld+i(%lld) and %lld-i(%lld)",c1.x,c1.y,c1.x,c1.y);
 }
 else
 {
  printf("the roots are %lld and %lld ",c1.x,c1.y);
 }
}
int main(void)
{
 comp c1;
 int a,b,d;
 int x;
 input(&a,&b,&d);
 x=compute(a,b,d,&c1);
 output(c1,x);
 return 0;
}
