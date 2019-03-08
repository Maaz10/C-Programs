#include<stdio.h>
#include<math.h>

void inputnumber(int* n)
{
 printf("Enter the number ");
  scanf("%d",n);
}

int limit(int n)
{
 int i=0,m;
 m=n;
 while(m!=0)
 {
  m=m/10;
  i++;
 }
 return i;
}

void armstrong(int n,int* a,int* b,int c)
{ 
 int y=0;
  *b=n;   
 while (n != 0)
    {
        y = n % 10;
        *a +=(pow(y,c)) ;
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
 int n=0,a=0,b=0,c=0;
 inputnumber(&n);
 c=limit(n);
 armstrong(n,&a,&b,c);
 outputresult(a,b);
 return 0;
}
