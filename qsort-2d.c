#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int getn()
{
    int n;
    printf("Enter number of strings ");
    scanf("%d",&n);
    return n;
}

void input(int n,char s[n][25])
{
    printf("Enter the string ");
    for(int i=0;i<n;i++)
    {   
        scanf("%s",s[i]);
    }
}

int compare(const void *p1,const void *p2)
{
    return strcmp( (const char* )p1 , (const char* )p2 );
}

int main()
{
    int n;
    n=getn();
    char s[n][25];
    input(n,s);
    qsort(&s[0][0],n,sizeof(char*),compare);
    printf("The string after sorting is\n");
    for(int i=0;i<n;i++)
    {
     printf("%s",s[i]);
    }    
    return 0;
}
