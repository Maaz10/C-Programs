#include<stdio.h>

void input(int* x)
{
 printf("Enter the number ");
  scanf("%d",x);
}

void armstrong(int x,int* m,int* temp)
{ 
 int y=0;
  *temp=x;   
 while (x != 0)
    {
        y = x % 10;
        *m = *m +(y*y*y) ;
        x=x/10;
    }
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
 int x=0,y=0,z=0;
 input(&x);
 armstrong(x,&z,&y);
 output(y,z);
 return 0;
}
 

 
