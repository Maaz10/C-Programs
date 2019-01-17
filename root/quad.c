#include <stdio.h>
#include <math.h>

int input(int* a, int* b, int* c )
{
 printf("Enter th coeffecients of a b and c ");
 scanf("%d %d %d",a,b,c);
}

int compute(int a, int b, int c, int* y, int* z)
{
 int x;
 x=(b*b)-(4*a*c);
 *y=((-b)+(sqrt(x)))/(2*a);
 *z=((-b)-(sqrt(x)))/(2*a);
 return 0;
}
void output(int x, int y)
{
 printf("the roots are %d and %d ",x,y);
}
int main(void)
{
 int a,b,c,y,z;
 input(&a,&b,&c);
 compute(a,b,c,&y,&z);
 output(y,z);
 return 0;
}
