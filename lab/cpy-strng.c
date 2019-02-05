#include<stdio.h>
#include<string.h>
void input(char s[])
{
 printf("Enter the string ");
 scanf("%s",s);
}

void compute(char s[],char f[])
{
 for(int i=0;i<strlen(s);i++)
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
 input(s);
 compute(s,f);
 output(f);
 return 0;
}
