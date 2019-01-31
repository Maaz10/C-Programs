#include<stdio.h>
#include<complex.h>


void input(int* a,int* b,int* c)
{
 printf("Enter the co-eff's of a,b and c ");
 scanf("%d %d %d",a,b,c);
}

void compute(int a, int b, int d,double complex* c1,double complex* c2)
{
  int z,f;
  z=(2*a);
  f=-b;
  *c1=(f/z)+(csqrt((b*b)-(4*a*d))/z);
  *c2=(f/z)-(csqrt((b*b)-(4*a*d))/z);
}
void output(double complex c1,double complex c2)
{
 {
 printf("roots are imaginary \n");
 printf("%f+%fi and %f%fi",creal(c1),cimag(c1),creal(c2),cimag(c2));
 }
}
int main(void)
{
 double complex  c1,c2;
 int a,b,d;
 input(&a,&b,&d);
 compute(a,b,d,&c1,&c2);
 output(c1,c2);
 return 0;
}
