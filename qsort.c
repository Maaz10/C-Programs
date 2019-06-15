#include<stdio.h>
#include<stdlib.h>
int compare(const void *p1,const void *p2)
{
    return (*(int*)p1-*(int*)p2);
}

void main()
{
    int a[]={1,3,2};
 
    qsort(&a[0],3,sizeof(int),compare);
    printf("After sorting\n");
    for(int i=0;i<3;i++)
        {
             printf("%d",a[i]);
        }
}
