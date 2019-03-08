#include<stdio.h>

void inputnumber(int* n)
{
 printf("Enter the number ");
 scanf("%d",n);
}

void reverse(int n,int* r)
{
 int j;
 j=n;
 while( j!=0 )
    {
        *r = *r*10+(j%10);
        j/= 10;
    }

}

void outputresult(int n,int r)
{
 if(n == r)
  printf("It is a palindrome\n");
 else
  printf("It is not a palindrome\n");
}
 
int main()
{
 int n,r=0;
 inputnumber(&n);
 reverse(n,&r);
 outputresult(n,r);
 return 0;
}
