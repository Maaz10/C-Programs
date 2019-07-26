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

int compare(const void* a,const void* b)
{
     return (*(int*)a-*(int*)b);
}

void output(int n,int a[n])
{
    printf("The array after sorting is ");
    for(int i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
}
 
void main()
{
    int n;
    n=getn();
    int a[n],x[2];
    input(n,a);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-i-1);j++)
        {
            if(a[j]>a[j+1])
            {
                x[0]=a[j];
                x[1]=a[j+1];
                qsort(x,2,sizeof(int),compare);
            }
        }
    }
    output(n,a);
}
