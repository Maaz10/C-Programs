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

void input(int n,struct class s[n])
{
    printf("Enter Rollno and Name\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",i+1);        
        scanf(" %d %s",&s[i].rollno,s[i].name);
    }
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

void main()
{
    int n;
    n=getn();
    struct class s[n];
    int type;
    input(n,s);
    printf("Enter the type of sorting\nr:Rollno\nn:Name\n");
    scanf("%d",type);
    switch(type)
    {
    case 'r':
        qsort(s,n,sizeof(struct class),cmprollno);
        printf("After sorting\n");
        for(int i=0;i<n;i++)
        {
            printf("%d ",i+1);     
            printf("%d %s\n",s[i].rollno,s[i].name);
        }
        break;
    case 'n':
        qsort(s,n,sizeof(struct class),cmpname);
        printf("After sorting\n");
        for(int i=0;i<n;i++)
        {
            printf("%d ",i+1);     
            printf("%d %s\n",s[i].rollno,s[i].name);
        }
        break;
    }
}
