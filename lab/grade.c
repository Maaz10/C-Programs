#include<stdio.h>

int input()
{
   int z;
   printf("Enter the number ");
   scanf("%d",&z);
   return z;
}

int grade(int x)
{

  if(x>=95)
  {
   printf("A+");
  }
  else
   if(x>=90)
   {
    printf("A");
   }
  else
   if(x>=85)
   {
    printf("B+");
   } 
  else 
   if(x>=80)
   { 
   printf("B");
   }
  else 
   if(x>=75)
   {
    printf("C+");
   }
  else 
   if(x>=70)
   {
    printf("C");
   }
  else 
   if(x>=60)
   {
    printf("D+");
   }
  else 
   if(x>=50)
   {
    printf("D");
   }
  else 
   if(x>=40)
   {
    printf("E");
   }
  else
  {
   printf("FAIL");
  }
 return 0;
}
int main(void)
{
 int n=input();
 grade(n);
 return 0;
}





 
