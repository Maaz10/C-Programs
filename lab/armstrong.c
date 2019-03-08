#include<stdio.h>

void inputnumber(int* n)
{
 printf("Enter the number ");
  scanf("%d",n);
}

void armstrong(int n,int* a,int* b)
{ 
 int y=0;
  *b=n;   
 while (n != 0)
    {
        y = n % 10;
        *a = *a +(y*y*y) ;
        n=n/10;
    }
}
void outputresult(int a,int b)
{
 printf("the sum is %d",a);
  if(a == b)
  {
   printf("\nIt is an Armstrong number");
  }
  else
   printf("\nIt is not an Armstrong number");
}

int main(void)
{
 int n=0,a=0,b=0;
 inputnumber(&n);
 armstrong(n,&a,&b);
 outputresult(a,b);
 return 0;
}
