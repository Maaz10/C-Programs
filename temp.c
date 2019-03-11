#include<stdio.h>

int input()
{
   int n;
   printf("Enter the number ");
   scanf("%d",&n);
   return n;
}

int grade(int n,char s[])
{
  if(n>=95)
  {
   s="A+";
  }
  else
   if(n>=90)
   {
    s="A";
   }
  else
   if(n>=85)
   {
    s="B+";
   } 
  else 
   if(n>=80)
   { 
     s="B";
   }
  else 
   if(n>=75)
   {
    s="C+";
   }
  else 
   if(n>=70)
   {
      s="C";
   }
  else 
   if(n>=60)
   {
    s="D+";
   }
  else 
   if(n>=50)
   {
   s="D";
   }
  else 
   if(n>=40)
   {
    s="E";
   }
  else
  {
   s="FAIL";
  }
}
int main(void)
{
 char s[5];
 int n=input();
 grade(n,s);
 return 0;
}
