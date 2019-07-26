
#include<stdio.h>
#include<stdlib.h>
int getn()
{
    int n;
    printf("Enter the number of entries ");
    scanf("%d",&n);
    return n;
}

void input(int n,int a[n])
{
    printf("Enter the numbers ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void output(int n,int a[n])
{
    printf("The array after sorting is ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

int compare(const void *a,const void *b)
{
     return (*(int*)a-*(int*)b);
}

void myqsort(int n,int a[n],int size,int(*compare)(const void *p1,const void *p2))
{
    int x[2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-i-1);j++)
        {
                x[0]=a[j];
                x[1]=a[j+1];
                qsort(x,2,sizeof(int),compare);
        }
    }
}

void main()
{
    int n,size;
    n=getn();
    int a[n];
    input(n,a);
    size=sizeof(int);
    myqsort(n,a,size,compare);
    output(n,a);
}
