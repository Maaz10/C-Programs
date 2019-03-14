#include<stdio.h>
#include<string.h>

struct string
{
 int n;
 int rows;
 char s1[100];
 char s2[100];
};

void input1(struct string *s)
{
 printf("Enter the repetitions ");
 scanf("%d",&s->n);
}

void input2(struct string *s)
{
 printf("Enter the number of rows");
 scanf("%d",&s->rows);
}

void input3(struct string *s)
{
 printf("Enter the first string ");
 scanf("%s",s->s1);
 printf("Enter the second string ");
 scanf("%s",s->s2);
}

void output(struct string s)
{
 char s3[100]="";
 printf("%s\n%s\n",s.s1,s.s2);
 for(int i=0;i<s.rows-2;i++)
 {
  strcat(s.s1,s.s2);
  strcat(s3,s.s1);
  printf("%s\n",s.s1);
 }
}

int main()
{
 struct string s;
 input1(&s);
 input2(&s);
 input3(&s);
 output(s);
 return 0;
} 
