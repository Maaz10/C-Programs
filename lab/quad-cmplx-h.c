#include<stdio.h>
#include<complex.h>


void input(int* a,int* b,int* c)
{
 printf("Enter the co-eff's of a,b and c ");
 scanf("%d %d %d",a,b,c);
}

int compute(int a, int b, int d,float* c1,float* c2)
{
  int x,z,f;
  float y;
  z=(2*a);
  f=-b;
  x=(b*b)-(4*a*d);
  y=(csqrt(x));
  *c1=((csqrt(x))/z);
  *c2=((f-(csqrt(x)))/z);
  return y;
}
void output(float c1,float c2,float y)
{
 {
 printf("imag %f",y);
 printf("roots are imaginary \n");
 printf("%f+i(%f) and %f-i(%f)",creal(c2),cimag(c1),creal(c2),cimag(c1));
 }
}
int main(void)
{
 float c1,c2;
 int a,b,d,y;
 input(&a,&b,&d);
 y=compute(a,b,d,&c1,&c2);
 output(c1,c2,y);
 return 0;
}
