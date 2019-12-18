#include<stdio.h>
#include<ctype.h>

char s[10];
int t=-1;

void push(char x)
{ 
 s[++t]=x;
}

int pop()
{
 if(t==-1)
 {
      printf("stack empty");
      return -1;
 }
 else
 {
      return s[t--]; 
 }
}

int priority(char x)
{
 if(x=='+' || x=='-')
  return 1;
 if(x=='*' || x=='/')
  return 2;
 if(x=='^')
  return 3;
 else
  return 0;
}

int main()
{ 
 char exp[20];
 char *e,x;
 printf("Enter the expression: ");
 scanf("%s",exp);
 e=exp;
 while(*e !='\0')
 { 
  if(isalnum(*e))
    printf("%c",*e);
  else if(*e =='(')
    push(*e);
  else if(*e ==')')
  {
   while((x=pop())!='(')
   {
    printf("%c",x);
   }
  }
  else
  {
   while(priority(s[t])>=priority(*e))
   {
    printf("%c",pop());
    push(*e);
   }
  }
  e++;
 }
 
 while(t!=-1)
      printf("%c",pop());
 return 0;
}
