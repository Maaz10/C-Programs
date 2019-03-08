#include<stdio.h>
#include<string.h>
void input(char s[])
{
 printf("Enter the string ");
 scanf("%s",s);
}

void stringlength(char s[],int *length)
{
 for(int i=0;i<100;i++)
 {
  if(s[i]=='\0')
  {
   *length=i;
   break;
   }
 }
}

void copy(char s[],char f[],int length)
{
 for(int i=0;i<length;i++)
 {
  f[i]=s[i];
 }
}
void output(char *f)
{
 printf("The copied string is %s",f);
}


int main()
{
 char s[100];
 char f[100];
 int length;
 input(s);
 stringlength(s,&length);
 copy(s,f,length);
 output(f);
 return 0;
}
