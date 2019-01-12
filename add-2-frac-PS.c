#include<stdio.h>
typedef struct frac
{
int x,y;                      
}f;
int input(f* h1,f* h2)
{
 printf("Enter numerator of 1st");
 scanf("%f",&h1->x);

 printf("Enter denomenator of 1st");
 scanf("%f",&h1->y);

 printf("Enter numerator of 2nd");
 scanf("%f",&h2->x);

 printf("Enter denomenator of 2nd");
 scanf("%f",&h2->y);

 return 0;
}
int compute(f* h1,f* h2)
{
 int k=0;
 float sum=0;
     k=( h1->y * h2->y );
    sum=(( h1->x * h2->y )+( h1->y * h2->x ))/k;
 return sum;
}
void output(float o)
{
 printf("the sum is %f ",o);
}
int main()
{
 f h1,h2;
 float c;
 input(&h1,&h2);
 c=compute(&h1,&h2);
 output(c);
}
    
