#include<stdio.h>
#include<math.h>
struct input
{
 int x,y;
};
double input(void)
{
 struct input h;
 printf("enter 1st number\n");
 scanf("%d",&h.x);
 
 printf("enter 2nd number\n");
 scanf("%d",&h.y);
}
double compute(void)
{
 struct input h;
 int o;
 o=h.x+h.y;
 return o;
}
double output(int o)
{ 
 printf("sum of them is %d",o);
}
double main(void)
{

 int a=input();
 int b=compute();
 output(b);
}


