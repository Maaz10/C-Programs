#include<stdio.h>

void input(int* x)
{
 printf("Enter the number ");
  scanf("%d",x);
}

void compute(int y,int* m)
{
 
  *m = *m +(y*y*y);
}     

void output(int y,int m)
{
 printf("the sum is %d",m);
  if(m == y)
  {
   printf("It is an Armstrong number");
  }
  else
   printf("It is not an Armstrong number");
}

int main(void)
{
 int x,z;
 input(&x);
 compute(x,&z);
 output(x,z);
 return 0;
}
 

 

 
