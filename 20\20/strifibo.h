#include<stdio.h>
#include<string.h>

struct string
{
 int rows;
 char s1[100];
 char s2[100];
};

int input1()
{
 int n;
 printf("Enter the repetitions ");
 scanf("%d",&n);
 return n;
}

void input2(struct string s[])
{
 printf("Enter the number of rows");
 scanf("%d",&s[0].rows);
}

void input3(struct string s[])
{
 printf("Enter the first string ");
 scanf("%s",s[0].s1);
 printf("Enter the second string ");
 scanf("%s",s[1].s1);
}

void string(struct string s[])
{
 strcpy(s[0].s2,s[0].s1);
 strcpy(s[1].s2,s[1].s1);
 for(int i=2;i<=s[0].rows;i++)
 {
  strcat(s[i-2].s1,s[i-1].s1);
  strcpy(s[i].s2,s[i-2].s1);
  strcpy(s[i].s1,s[i-2].s1);
 }
}

void output(struct string *s)
{
 printf("The string is\n");
 for (int i=0;i<s[0].rows;i++)
 {
  printf("%s\n",s[i].s2);
 }
}

int main()
{
 int n,i=0;
 struct string s[10];
 n=input1(s);
 while(i<n)
 {
  input2(s);
  input3(s);
  string(s);
  output(s);
  i++;
 }
 return 0;
} 
