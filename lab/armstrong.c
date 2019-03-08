#include<stdio.h>

void input(int* n)
{
 printf("Enter the number ");
  scanf("%d",n);
}

void armstrong(int n,int* a,int* b)
{ 
 int y=0;
  *b=x;   
 while (n != 0)
    {
        y = n % 10;
        *a = *a +(y*y*y) ;
        n=n/10;
    }
}
void output(int a,int b)
{
 printf("the sum is %d",a);
  if(a == b)
  {
   printf("It is an Armstrong number");
  }
  else
   printf("It is not an Armstrong number");
}

int main(void)
{
 int n=0,a=0,b=0;
 input(&n);
 armstrong(n,&a,&b);
 output(a,b);
 return 0;
}
