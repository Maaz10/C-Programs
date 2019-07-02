#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct class
{
    int rollno;
    char name[10];
};

int getn()
{
    int n;
    printf("Enter the number of inputs ");
    scanf("%d",&n);
    return n;
}

int input(int n,struct class s[n])
{
    int type;
    printf("\nEnter Rollno and Name\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",i+1);        
        scanf(" %d %s",&s[i].rollno,s[i].name);
    }
    printf("\nEnter the type of sorting\n1:Rollno\n2:Name\n->");
    scanf("%d",&type);
    return type;
}

int cmprollno(const void *a,const void *b)
{
    struct class *sa=(struct class *)a;
    struct class *sb=(struct class *)b;
    return (sa->rollno - sb->rollno);
}

int cmpname(const void *a,const void *b)
{
    struct class *sa=(struct class *)a;
    struct class *sb=(struct class *)b;
    return strcmp(sa->name,sb->name);
}

void output(int n,struct class s[n])
{
    printf("\nAfter sorting\n");
    for(int i=0;i<n;i++)
    {
         printf("%d ",i+1);     
         printf("%d %s\n",s[i].rollno,s[i].name);
    }    
}

void main()
{
    int n;
    n=getn();
    struct class s[n];
    int type=0;
    type=input(n,s);
    switch(type)
    {
    case 1:
        qsort(s,n,sizeof(struct class),cmprollno);
        break;
    case 2:
        qsort(s,n,sizeof(struct class),cmpname);
        break;
    }
    output(n,s)
}
