#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int getn()
{
 int n;
 printf("Enter the number of strings");
 scanf("%d",&n);
 return n;
}

void input(int n,char *s[n])
{
 char a[10];
 for(int i=0;i<n;i++)\
 {
   printf("Enter string");
   scanf("%s",a);
   //scanf("%s",s[i]);
   //s[i] = malloc((strlen(s[i])/**sizeof(char)*/)+1);
   s[i]=malloc(strlen(a)+1);
   strcpy(s[i],a);
 }
}

int compare(const void* p1,const void* p2) 
{
 return strcmp(*(const char**)p1, *(const char**)p2);
}

void output(int n, char *s[n])
{
 printf("After sorting\n");
 for(int i=0;i<n;i++)
 {
   printf("%s",s[i]);
 }
}

void main()
{
 int n;
 n=getn();
 char *s[n];
 input(n,s);
 
 qsort(s,n,sizeof(char*),compare);
 output(n,s);
for(int i=0;i<n;i++)
{
 free(s[i]);
}
}
